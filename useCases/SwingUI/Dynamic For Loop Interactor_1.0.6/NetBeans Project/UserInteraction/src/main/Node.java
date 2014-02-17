package main;

import javax.swing.tree.DefaultMutableTreeNode;

public class Node extends DefaultMutableTreeNode {

    /**
     * 
     */
    private static final long serialVersionUID = 1L;
    public int forID;
    public int UID;
    public String pragma;
    public String pragmaNested;
    public String body;
    public String partialBody;
    public String loopHead;
    public String userPragma;
    public boolean isParallelizable;

    public Node(String root) {
        super(root);
        UID = -1;
        body = "Sorry no body";
        forID = -1;
        loopHead = "No loop head";
        partialBody = "Don't touch my body";
        userPragma = null;
        isParallelizable = true;
    }
}
