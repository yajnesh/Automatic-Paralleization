package main;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import javax.swing.JFrame;
import javax.swing.JOptionPane;

final class ConstructTree {

    public Node root;
    public List<Node> arr = new ArrayList<Node>();
    public HashMap<String, String> bodyMap = new HashMap<String, String>();
    public HashMap<String, String> pragmaMap = new HashMap<String, String>();
    public HashMap<String, String> pragmaNestedMap = new HashMap<String, String>();
    private JFrame mJFrame;
    private String fileContentString;
    private String fileBodyString;
    private String filePragmaString;
    private String filePragmaNestedString;

    public ConstructTree(JFrame jFrame) {
        mJFrame = jFrame;
        refresh();
    }

    private void addChildToArray(int forID, int UID, String loopHead, String partialBody, String body, String pragma, String pragmaNested) {
        Node child = new Node(loopHead);
        child.forID = forID;
        child.UID = UID;
        child.loopHead = loopHead;
        child.partialBody = partialBody;
        child.body = body;
        child.pragma = pragma;
        child.pragmaNested = pragmaNested;
        arr.add(child);
    }

    private void ConstructTreeFromArray() {
        Node prev[] = new Node[100];
        Node current = null;
        prev[0] = root;
        for (int i = 0; i < arr.size(); i++) {
            current = arr.get(i);
            prev[current.forID].add(current);
            prev[current.forID + 1] = current;
        }

    }

    private String getPragmaFromFile(Integer UID) {
        return pragmaMap.get(UID.toString());
    }

    private String getPragmaNestedFromFile(Integer UID) {
        return pragmaNestedMap.get(UID.toString());
    }

    private void processBodyMap() {
        String[] fullBody = fileBodyString.split(GlobalFileHandler.SPLIT_VALUE_MINUS);
        for (int i = 1; i < fullBody.length; i++) {
            String[] str = fullBody[i].split(GlobalFileHandler.SPLIT_VALUE_EQUAL);
            bodyMap.put(str[0].trim(), str[1]);
        }
    }

    private String getBody(Integer UID) {
        return bodyMap.get(UID.toString());
    }

    private void processPragmaMap() {
        String[] fullBody = filePragmaString.split(GlobalFileHandler.SPLIT_VALUE_MINUS);
        for (int i = 1; i < fullBody.length; i++) {
            String[] str = fullBody[i].split(GlobalFileHandler.SPLIT_VALUE_EQUAL);
            pragmaMap.put(str[0].trim(), str[1].trim());
        }
    }

    private void processPragmaNestedMap() {
        String[] fullBody = filePragmaNestedString.split(GlobalFileHandler.SPLIT_VALUE_MINUS);
        for (int i = 1; i < fullBody.length; i++) {
            String[] str = fullBody[i].split(GlobalFileHandler.SPLIT_VALUE_EQUAL);
            pragmaNestedMap.put(str[0].trim(), str[1].trim());
        }
    }

    public void readFile() {
        try {
            fileContentString = GlobalFileHandler.readFileAsString(GlobalFileHandler.CODE_BUFFER_FILE);
            fileBodyString = GlobalFileHandler.readFileAsString(GlobalFileHandler.FOR_BODY_FILE);
            filePragmaString = GlobalFileHandler.readFileAsString(GlobalFileHandler.PRAGMA_NEST_0_FILE);
            filePragmaNestedString = GlobalFileHandler.readFileAsString(GlobalFileHandler.PRAGMA_NEST_1_FILE);
        } catch (FileNotFoundException ex) {
            JOptionPane.showConfirmDialog(mJFrame, ex.getMessage(), "Error", JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE);
            System.exit(0);
        } catch (IOException ex) {
            JOptionPane.showConfirmDialog(mJFrame, ex.getMessage(), "Error", JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE);
            System.exit(0);
        }
    }

    public void refresh() {
        root = new Node("Root");
        readFile();
        processBodyMap();
        processPragmaMap();
        processPragmaNestedMap();
        String[] matchedBody = fileContentString.split(GlobalFileHandler.SPLIT_VALUE_START);
        for (int j = 1; j < matchedBody.length; j++) {
            int reduce = 0;

            String[] matchedForHeader = matchedBody[j].split(GlobalFileHandler.SPLIT_VALUE_MINUS);

            for (int i = 1; i < matchedForHeader.length; i++) {
                String partialBody = matchedForHeader[i];
                String[] str = matchedForHeader[i].split(GlobalFileHandler.SPLIT_VALUE_EQUAL);
                String[] str1 = str[0].split(",");
                
                if(i==1) reduce=Integer.parseInt(str1[0].trim());
                
                Integer forID =  Integer.parseInt(str1[0].trim())-reduce; //to avoid the forID being started with anything other than 0
                Integer UID = Integer.parseInt(str1[1].trim());
                Pattern p = Pattern.compile(GlobalFileHandler.SPLIT_VALUE_FOR_REGX);
                Matcher m = p.matcher(str[1]);
                m.find();
                String loopHead = m.group();

                String body = getBody(UID);
                String pragma = getPragmaFromFile(UID);
                String pragmaNested = getPragmaNestedFromFile(UID);
                addChildToArray(forID, UID, loopHead, partialBody, body, pragma, pragmaNested);
            }

        }
        ConstructTreeFromArray();
    }
}