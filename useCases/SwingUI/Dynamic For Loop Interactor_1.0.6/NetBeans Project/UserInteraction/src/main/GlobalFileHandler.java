package main;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

public class GlobalFileHandler {

    /**
     * 
     */
    private static final long serialVersionUID = 2L;
    public static final String SPLIT_VALUE_MINUS = "--";
    public static final String SPLIT_VALUE_EQUAL = "==";
    public static final String SPLIT_VALUE_COMA = ",";
    public static final String SPLIT_VALUE_START = "___START";
    public static final String SPLIT_VALUE_FOR_REGX = "for(.*)";
    public static final String PRAGMA_REGX = "#pragma omp parallel for private\\(.+\\)";
    public static final String NUM_THREADS_CONTAINS = "omp_set_num_threads";
    public static final String CODE_BUFFER_FILE = DisplayJFrame.DIRECTORY_ADDRESS + "buff.c";
    public static final String FOR_BODY_FILE = DisplayJFrame.DIRECTORY_ADDRESS + "buff_body.c";
    public static final String PRAGMA_NEST_0_FILE = DisplayJFrame.DIRECTORY_ADDRESS + "buff_pragma_nested0.c";
    public static final String PRAGMA_NEST_1_FILE = DisplayJFrame.DIRECTORY_ADDRESS + "buff_pragma_nested1.c";
    public static final String PROG_PRAGMA_NEST_0_FILE = DisplayJFrame.DIRECTORY_ADDRESS + "nested0.c";
    public static final String PROG_PRAGMA_NEST_1_FILE = DisplayJFrame.DIRECTORY_ADDRESS + "nested1.c";
    public static final String OUTPUT_FILE = DisplayJFrame.DIRECTORY_ADDRESS + "output_parallel.c";
    public static final String TEMP_OUTPUT_FILE = DisplayJFrame.DIRECTORY_ADDRESS + ".temp_output_parallel.c";

    public static String readFileAsString(String path) throws FileNotFoundException, IOException {
        StringBuilder fileData = new StringBuilder();

        BufferedReader reader;
        reader = new BufferedReader(
                new FileReader(path));
        char[] buf = new char[1024];
        int numRead = 0;
        while ((numRead = reader.read(buf)) != -1) {
            String readData = String.valueOf(buf, 0, numRead);
            fileData.append(readData);
        }
        reader.close();
        return fileData.toString();
    }

    public static ArrayList<String> readFileLineByLine(String path) throws FileNotFoundException, IOException {
        ArrayList<String> tempArrayList = new ArrayList<String>();
        BufferedReader br = new BufferedReader(new FileReader(path));
        String line;
        while ((line = br.readLine()) != null) {
            tempArrayList.add(line);
        }
        br.close();
        return tempArrayList;
    }

    public static void writeFileLineByLine(String path, ArrayList<String> tempArrayList) throws IOException {
        BufferedWriter bw = new BufferedWriter(new FileWriter(path));
        for (int i = 0; i < tempArrayList.size(); i++) {
            bw.write(tempArrayList.get(i) + "\n");
        }
        bw.close();
    }
}
