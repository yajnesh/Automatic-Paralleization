package main;

import java.awt.Dimension;
import java.awt.Toolkit;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Enumeration;
import javax.swing.ImageIcon;
import javax.swing.JOptionPane;
import javax.swing.JScrollBar;
import javax.swing.SpinnerNumberModel;
import javax.swing.event.TreeSelectionEvent;
import javax.swing.event.TreeSelectionListener;
import org.fife.ui.rsyntaxtextarea.RSyntaxTextArea;
import org.fife.ui.rsyntaxtextarea.SyntaxConstants;
import org.fife.ui.rtextarea.RTextScrollPane;

public class DisplayJFrame extends javax.swing.JFrame implements TreeSelectionListener {

    /**
     * 
     */
    private static final long serialVersionUID = 6L;
    private Node mNode;
    private Node rootNode;
    private String sourceString;
    private ArrayList<String> sourceArrayList;
    private JScrollBar vertical;
    private ConstructTree constructTree;
    private String mNodeCurrentUserPragma;
    private String tempMNodeCurrentUserPragma;
    private boolean isCompailable;
    public static String DIRECTORY_ADDRESS = "";

    public DisplayJFrame() {
        constructTree = new ConstructTree(this);
        mNode = constructTree.root;
        rootNode = constructTree.root;
        isCompailable = false;
        initComponents();
        initRSyntaxTextArea();
        this.setIconImage(new ImageIcon(getClass().getResource("/main/resources/icon.png")).getImage());
        vertical = sourceRTextScrollPane.getVerticalScrollBar();
        forLoopjTree.addTreeSelectionListener(this);
        Dimension dim = Toolkit.getDefaultToolkit().getScreenSize();
        setLocation(dim.width / 2 - this.getSize().width / 2, dim.height / 2 - this.getSize().height / 2);
        numberOfThreadsJSpinner.setModel(new SpinnerNumberModel(Runtime.getRuntime().availableProcessors(), 1, 100, 1));
        loadSourceFile(false);
        reflectNode();
    }

    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        userInteractorMainjPanel = new javax.swing.JPanel();
        forLoopJScrollPane = new javax.swing.JScrollPane();
        forLoopjTree = new javax.swing.JTree(mNode);
        forSourceRTextScrollPane = new RTextScrollPane();
        forBodyRSyntaxTextArea = new RSyntaxTextArea();
        userControlJPanel = new javax.swing.JPanel();
        isParallaleizablejToggleButton = new javax.swing.JToggleButton();
        applyJButton = new javax.swing.JButton();
        userPragmaJTextField = new javax.swing.JTextField();
        identifiedPrivateJLabel = new javax.swing.JLabel();
        identifyJLabel = new javax.swing.JLabel();
        userJLabel = new javax.swing.JLabel();
        sourceJPanel = new javax.swing.JPanel();
        sourceRTextScrollPane = new RTextScrollPane();
        sourceRSyntaxTextArea = new RSyntaxTextArea();
        saveJButton = new javax.swing.JButton();
        reloadJButton = new javax.swing.JButton();
        isNestedJToggelButton = new javax.swing.JToggleButton();
        compileJButton = new javax.swing.JButton();
        editJToggleButton = new javax.swing.JToggleButton();
        numberOfThreadsJLabel = new javax.swing.JLabel();
        numberOfThreadsJSpinner = new javax.swing.JSpinner();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Dynamic For Loop Interactor 1.0.6");
        setResizable(false);

        userInteractorMainjPanel.setBorder(javax.swing.BorderFactory.createTitledBorder("User Interactor"));

        forLoopjTree.setBorder(javax.swing.BorderFactory.createTitledBorder("Pick for loop"));
        forLoopJScrollPane.setViewportView(forLoopjTree);

        forBodyRSyntaxTextArea.setColumns(20);
        forBodyRSyntaxTextArea.setEditable(false);
        forBodyRSyntaxTextArea.setRows(5);
        forSourceRTextScrollPane.setViewportView(forBodyRSyntaxTextArea);

        userControlJPanel.setBorder(javax.swing.BorderFactory.createTitledBorder("Node Control"));

        isParallaleizablejToggleButton.setText("Loop is parallelizable");
        isParallaleizablejToggleButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                isParallaleizablejToggleButtonActionPerformed(evt);
            }
        });

        applyJButton.setText("Apply");
        applyJButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                applyJButtonActionPerformed(evt);
            }
        });

        userPragmaJTextField.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyReleased(java.awt.event.KeyEvent evt) {
                userPragmaJTextFieldKeyReleased(evt);
            }
        });

        identifiedPrivateJLabel.setBorder(javax.swing.BorderFactory.createEtchedBorder());

        identifyJLabel.setText("Identified pragma : ");

        userJLabel.setText("User pragma : ");

        javax.swing.GroupLayout userControlJPanelLayout = new javax.swing.GroupLayout(userControlJPanel);
        userControlJPanel.setLayout(userControlJPanelLayout);
        userControlJPanelLayout.setHorizontalGroup(
            userControlJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(userControlJPanelLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(userControlJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, userControlJPanelLayout.createSequentialGroup()
                        .addGroup(userControlJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(identifyJLabel)
                            .addComponent(userJLabel))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(userControlJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(userPragmaJTextField)
                            .addComponent(identifiedPrivateJLabel, javax.swing.GroupLayout.PREFERRED_SIZE, 388, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(userControlJPanelLayout.createSequentialGroup()
                        .addComponent(isParallaleizablejToggleButton, javax.swing.GroupLayout.PREFERRED_SIZE, 228, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 208, Short.MAX_VALUE)
                        .addComponent(applyJButton, javax.swing.GroupLayout.PREFERRED_SIZE, 77, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addContainerGap())))
        );
        userControlJPanelLayout.setVerticalGroup(
            userControlJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(userControlJPanelLayout.createSequentialGroup()
                .addGroup(userControlJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(identifyJLabel)
                    .addComponent(identifiedPrivateJLabel, javax.swing.GroupLayout.PREFERRED_SIZE, 27, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(userControlJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(userJLabel)
                    .addComponent(userPragmaJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 11, Short.MAX_VALUE)
                .addGroup(userControlJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(isParallaleizablejToggleButton)
                    .addComponent(applyJButton)))
        );

        userControlJPanelLayout.linkSize(javax.swing.SwingConstants.VERTICAL, new java.awt.Component[] {identifiedPrivateJLabel, userPragmaJTextField});

        javax.swing.GroupLayout userInteractorMainjPanelLayout = new javax.swing.GroupLayout(userInteractorMainjPanel);
        userInteractorMainjPanel.setLayout(userInteractorMainjPanelLayout);
        userInteractorMainjPanelLayout.setHorizontalGroup(
            userInteractorMainjPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(userInteractorMainjPanelLayout.createSequentialGroup()
                .addComponent(forLoopJScrollPane, javax.swing.GroupLayout.PREFERRED_SIZE, 272, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(forSourceRTextScrollPane, javax.swing.GroupLayout.DEFAULT_SIZE, 283, Short.MAX_VALUE))
            .addGroup(userInteractorMainjPanelLayout.createSequentialGroup()
                .addComponent(userControlJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        userInteractorMainjPanelLayout.setVerticalGroup(
            userInteractorMainjPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(userInteractorMainjPanelLayout.createSequentialGroup()
                .addGroup(userInteractorMainjPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(userInteractorMainjPanelLayout.createSequentialGroup()
                        .addGap(6, 6, 6)
                        .addComponent(forLoopJScrollPane, javax.swing.GroupLayout.PREFERRED_SIZE, 340, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(forSourceRTextScrollPane, javax.swing.GroupLayout.DEFAULT_SIZE, 346, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(userControlJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
        );

        sourceJPanel.setBorder(javax.swing.BorderFactory.createTitledBorder("Source Panel"));

        sourceRSyntaxTextArea.setColumns(20);
        sourceRSyntaxTextArea.setEditable(false);
        sourceRSyntaxTextArea.setRows(5);
        sourceRTextScrollPane.setViewportView(sourceRSyntaxTextArea);

        saveJButton.setText("Save");
        saveJButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                saveJButtonActionPerformed(evt);
            }
        });

        reloadJButton.setText("Reload");
        reloadJButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                reloadJButtonActionPerformed(evt);
            }
        });

        isNestedJToggelButton.setText("Nested is Off");
        isNestedJToggelButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                isNestedJToggelButtonActionPerformed(evt);
            }
        });

        compileJButton.setText("Compile");
        compileJButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                compileJButtonActionPerformed(evt);
            }
        });

        editJToggleButton.setText("Edit");
        editJToggleButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                editJToggleButtonActionPerformed(evt);
            }
        });

        numberOfThreadsJLabel.setText("Set number of threads : ");

        numberOfThreadsJSpinner.setModel(new javax.swing.SpinnerNumberModel(1, 1, 100, 1));
        numberOfThreadsJSpinner.setEnabled(false);

        javax.swing.GroupLayout sourceJPanelLayout = new javax.swing.GroupLayout(sourceJPanel);
        sourceJPanel.setLayout(sourceJPanelLayout);
        sourceJPanelLayout.setHorizontalGroup(
            sourceJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(sourceJPanelLayout.createSequentialGroup()
                .addGap(23, 23, 23)
                .addComponent(numberOfThreadsJLabel)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(numberOfThreadsJSpinner, javax.swing.GroupLayout.PREFERRED_SIZE, 154, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(editJToggleButton, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addContainerGap())
            .addComponent(sourceRTextScrollPane, javax.swing.GroupLayout.DEFAULT_SIZE, 409, Short.MAX_VALUE)
            .addGroup(sourceJPanelLayout.createSequentialGroup()
                .addGap(45, 45, 45)
                .addGroup(sourceJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.CENTER)
                    .addComponent(compileJButton, javax.swing.GroupLayout.DEFAULT_SIZE, 100, Short.MAX_VALUE)
                    .addGroup(sourceJPanelLayout.createSequentialGroup()
                        .addComponent(isNestedJToggelButton)
                        .addGap(6, 6, 6)
                        .addComponent(reloadJButton, javax.swing.GroupLayout.PREFERRED_SIZE, 100, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(saveJButton, javax.swing.GroupLayout.PREFERRED_SIZE, 100, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(52, 52, 52))
        );

        sourceJPanelLayout.linkSize(javax.swing.SwingConstants.HORIZONTAL, new java.awt.Component[] {compileJButton, isNestedJToggelButton, reloadJButton, saveJButton});

        sourceJPanelLayout.setVerticalGroup(
            sourceJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, sourceJPanelLayout.createSequentialGroup()
                .addComponent(sourceRTextScrollPane, javax.swing.GroupLayout.DEFAULT_SIZE, 376, Short.MAX_VALUE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(sourceJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(editJToggleButton)
                    .addComponent(numberOfThreadsJLabel)
                    .addComponent(numberOfThreadsJSpinner, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(sourceJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(isNestedJToggelButton)
                    .addComponent(reloadJButton)
                    .addComponent(saveJButton))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(compileJButton))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(userInteractorMainjPanel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(sourceJPanel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(userInteractorMainjPanel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
            .addComponent(sourceJPanel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

private void isNestedJToggelButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_isNestedJToggelButtonActionPerformed
    if (isNestedJToggelButton.isSelected()) {
        isNestedJToggelButton.setText("Nested is On");
    } else {
        isNestedJToggelButton.setText("Nested is Off");
    }
    setIdentifiedPrivateVariablen();
    loadSourceFile(true);
    changeScroll();
}//GEN-LAST:event_isNestedJToggelButtonActionPerformed

private void isParallaleizablejToggleButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_isParallaleizablejToggleButtonActionPerformed
    if (isParallaleizablejToggleButton.isSelected()) {
        isParallaleizablejToggleButton.setText("Loop is not parallelizable");
        userPragmaJTextField.setText("Loop is not parallelizable");
        userPragmaJTextField.setEditable(false);
    } else {
        isParallaleizablejToggleButton.setText("Loop is parallelizable");
        userPragmaJTextField.setText(tempMNodeCurrentUserPragma);
        userPragmaJTextField.setEditable(true);
    }
    if (!userPragmaJTextField.getText().equals(mNodeCurrentUserPragma) || mNode.isParallelizable != !isParallaleizablejToggleButton.isSelected()) {
        applyJButton.setEnabled(true);
    } else {
        applyJButton.setEnabled(false);
    }
}//GEN-LAST:event_isParallaleizablejToggleButtonActionPerformed

private void saveJButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_saveJButtonActionPerformed
    if (JOptionPane.showConfirmDialog(this, "Do you want to save the changes?", "Save?", JOptionPane.YES_NO_OPTION) == 0) {
        save(GlobalFileHandler.OUTPUT_FILE, (ArrayList<String>) sourceArrayList.clone());
        filterOutPutFile();
        if (JOptionPane.showConfirmDialog(this, "New \"" + GlobalFileHandler.OUTPUT_FILE + "\" output file successfully created.\nDo you want to see the file?", "Success", JOptionPane.YES_NO_OPTION, JOptionPane.INFORMATION_MESSAGE) == 0) {
            Runtime rt = Runtime.getRuntime();
            try {
                rt.exec("/usr/bin/gedit " + GlobalFileHandler.OUTPUT_FILE);
            } catch (IOException ex) {
                JOptionPane.showConfirmDialog(this, ex.getMessage(), "Error", JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE);
            }
        }
        isCompailable = true;
    }
}//GEN-LAST:event_saveJButtonActionPerformed

private void reloadJButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_reloadJButtonActionPerformed
    if (JOptionPane.showConfirmDialog(this, "Do you want to reload?\nNote : All the data will get reloaded", "Reload?", JOptionPane.CANCEL_OPTION) == 0) {
        setVisible(false);
        dispose();
        new DisplayJFrame().setVisible(true);
    }
}//GEN-LAST:event_reloadJButtonActionPerformed

private void userPragmaJTextFieldKeyReleased(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_userPragmaJTextFieldKeyReleased
    tempMNodeCurrentUserPragma = userPragmaJTextField.getText();
    if (!userPragmaJTextField.getText().equals(mNodeCurrentUserPragma) || mNode.isParallelizable != !isParallaleizablejToggleButton.isSelected()) {
        applyJButton.setEnabled(true);
    } else {
        applyJButton.setEnabled(false);
    }
}//GEN-LAST:event_userPragmaJTextFieldKeyReleased

private void applyJButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_applyJButtonActionPerformed
    if (userPragmaJTextField.getText().isEmpty()) {
        mNode.userPragma = null;
    } else {
        if (!userPragmaJTextField.getText().equals("Loop is not parallelizable")) {
            if (!userPragmaJTextField.getText().matches(GlobalFileHandler.PRAGMA_REGX)) {
                JOptionPane.showConfirmDialog(this, "Invalid pragma.", "Invalid pragma", JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE);
                return;
            }
            mNode.userPragma = userPragmaJTextField.getText();
        } else if (tempMNodeCurrentUserPragma.matches(GlobalFileHandler.PRAGMA_REGX)) {
            mNode.userPragma = tempMNodeCurrentUserPragma;
        } else {
            mNode.userPragma = null;
        }

    }
    mNode.isParallelizable = !isParallaleizablejToggleButton.isSelected();
    loadSourceFile(true);
    JOptionPane.showConfirmDialog(this, "New user pragma applied to for loop with id = " + Integer.toString(mNode.UID) + ".", "Success", JOptionPane.DEFAULT_OPTION, JOptionPane.INFORMATION_MESSAGE);
    reflectNode();
}//GEN-LAST:event_applyJButtonActionPerformed

private void compileJButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_compileJButtonActionPerformed
    if (isCompailable) {
        Runtime rt = Runtime.getRuntime();
        try {
            String output;
            if (DIRECTORY_ADDRESS.equals("")) {
                String home = System.getProperty("user.home");
                output = home + "/output";
            } else {
                output = DIRECTORY_ADDRESS + "output";
            }
            rt.exec("/usr/bin/gcc -fopenmp " + GlobalFileHandler.OUTPUT_FILE + " -o " + output);
            JOptionPane.showConfirmDialog(this, "Source file successfully compiled (" + output + ").", "Success", JOptionPane.DEFAULT_OPTION, JOptionPane.INFORMATION_MESSAGE);
        } catch (IOException ex) {
            JOptionPane.showConfirmDialog(this, ex.getMessage(), "Error", JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE);
        }
    } else {
        JOptionPane.showConfirmDialog(this, "Please save the file first.", "File not saved", JOptionPane.DEFAULT_OPTION, JOptionPane.INFORMATION_MESSAGE);
    }

}//GEN-LAST:event_compileJButtonActionPerformed

private void editJToggleButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_editJToggleButtonActionPerformed
    if (editJToggleButton.isSelected()) {
        numberOfThreadsJSpinner.setEnabled(true);
    } else {
        numberOfThreadsJSpinner.setEnabled(false);
    }
}//GEN-LAST:event_editJToggleButtonActionPerformed
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton applyJButton;
    private javax.swing.JButton compileJButton;
    private javax.swing.JToggleButton editJToggleButton;
    /*
    private javax.swing.JTextArea forBodyRSyntaxTextArea;
    */
    private RSyntaxTextArea forBodyRSyntaxTextArea;
    private javax.swing.JScrollPane forLoopJScrollPane;
    private javax.swing.JTree forLoopjTree;
    /*
    private javax.swing.JScrollPane forSourceRTextScrollPane;
    */
    private RTextScrollPane forSourceRTextScrollPane;
    private javax.swing.JLabel identifiedPrivateJLabel;
    private javax.swing.JLabel identifyJLabel;
    private javax.swing.JToggleButton isNestedJToggelButton;
    private javax.swing.JToggleButton isParallaleizablejToggleButton;
    private javax.swing.JLabel numberOfThreadsJLabel;
    private javax.swing.JSpinner numberOfThreadsJSpinner;
    private javax.swing.JButton reloadJButton;
    private javax.swing.JButton saveJButton;
    private javax.swing.JPanel sourceJPanel;
    /*
    private javax.swing.JTextArea sourceRSyntaxTextArea;
    */private RSyntaxTextArea sourceRSyntaxTextArea;
    /*
    private javax.swing.JScrollPane sourceRTextScrollPane;
    */
    private RTextScrollPane sourceRTextScrollPane;
    private javax.swing.JPanel userControlJPanel;
    private javax.swing.JPanel userInteractorMainjPanel;
    private javax.swing.JLabel userJLabel;
    private javax.swing.JTextField userPragmaJTextField;
    // End of variables declaration//GEN-END:variables

    @Override
    public void valueChanged(TreeSelectionEvent arg0) {
        mNode = (Node) forLoopjTree.getLastSelectedPathComponent();
        reflectNode();
    }

    private ArrayList<String> getPrivateVariable(boolean isUserPragamaEnabled) {
        String pragma;
        if (mNode.userPragma != null && isUserPragamaEnabled) {
            pragma = mNode.userPragma;
        } else {
            if (isNestedJToggelButton.isSelected()) {
                pragma = mNode.pragmaNested;
            } else {
                pragma = mNode.pragma;
            }
        }
        if (pragma == null) {
            return null;
        } else if (!pragma.matches(GlobalFileHandler.PRAGMA_REGX)) {
            JOptionPane.showConfirmDialog(this, "Invalid pragma detected.", "Invalid pragma", JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE);
            mNode.userPragma = null;
            return getPrivateVariable(true);
        }
        ArrayList<String> pragmaArrayList = new ArrayList<String>();
        pragma = pragma.substring(33);
        String[] pragmaStrings = pragma.split(",");
        for (int i = 0; i < pragmaStrings.length; i++) {
            if (i == pragmaStrings.length - 1) {
                pragmaStrings[i] = pragmaStrings[i].substring(0, pragmaStrings[i].length() - 1);
            }
            pragmaArrayList.add(pragmaStrings[i]);
        }
        return pragmaArrayList;
    }

    private void setIdentifiedPrivateVariablen() {
        ArrayList<String> userPrivateVariableArrayList = getPrivateVariable(true);
        ArrayList<String> privateVariableArrayList = getPrivateVariable(false);
        if (privateVariableArrayList != null) {
            identifiedPrivateJLabel.setText("#pragma omp parallel for private(");
            for (int i = 0; i < privateVariableArrayList.size(); i++) {
                if (i == privateVariableArrayList.size() - 1) {
                    identifiedPrivateJLabel.setText(identifiedPrivateJLabel.getText() + privateVariableArrayList.get(i));
                } else {
                    identifiedPrivateJLabel.setText(identifiedPrivateJLabel.getText() + privateVariableArrayList.get(i) + ",");
                }
            }
            identifiedPrivateJLabel.setText(identifiedPrivateJLabel.getText() + ")");
        } else {
            identifiedPrivateJLabel.setText("No private variables identified");
        }
        if (userPrivateVariableArrayList != null) {
            userPragmaJTextField.setText("#pragma omp parallel for private(");
            for (int i = 0; i < userPrivateVariableArrayList.size(); i++) {
                if (mNode.isParallelizable) {
                    userPragmaJTextField.setEditable(true);
                    if (i == userPrivateVariableArrayList.size() - 1) {
                        userPragmaJTextField.setText(userPragmaJTextField.getText() + userPrivateVariableArrayList.get(i));
                    } else {
                        userPragmaJTextField.setText(userPragmaJTextField.getText() + userPrivateVariableArrayList.get(i) + ",");
                    }
                } else {
                    userPragmaJTextField.setEditable(false);
                    userPragmaJTextField.setText("Loop is not parallelizable");
                    break;
                }
            }
            if (mNode.isParallelizable) {
                userPragmaJTextField.setText(userPragmaJTextField.getText() + ")");
            }
        } else {
            userPragmaJTextField.setText(null);
        }
        setMNodeCurrentUserPragma();
    }

    private void initRSyntaxTextArea() {
        sourceRSyntaxTextArea.setSyntaxEditingStyle(SyntaxConstants.SYNTAX_STYLE_C);
        sourceRSyntaxTextArea.setCodeFoldingEnabled(true);
        sourceRSyntaxTextArea.setAntiAliasingEnabled(true);
        forBodyRSyntaxTextArea.setSyntaxEditingStyle(SyntaxConstants.SYNTAX_STYLE_C);
        forBodyRSyntaxTextArea.setCodeFoldingEnabled(true);
        forBodyRSyntaxTextArea.setAntiAliasingEnabled(true);
    }

    private void reflectNode() {
        if (mNode != null) {
            if (mNode.UID == -1) {
                identifiedPrivateJLabel.setText("Root node not accessible.");
                userPragmaJTextField.setText("Root node not accessible.");
                forBodyRSyntaxTextArea.setText("\tSELECTED FOR LOOP BODY\n ---------------------------------\nRoot node not accessible.");
                userPragmaJTextField.setEnabled(false);
                applyJButton.setEnabled(false);
                isParallaleizablejToggleButton.setEnabled(false);
            } else {
                userPragmaJTextField.setEnabled(true);
                isParallaleizablejToggleButton.setEnabled(true);
                isParallaleizablejToggleButton.setSelected(!mNode.isParallelizable);
                forBodyRSyntaxTextArea.setText("\tSELECTED FOR LOOP BODY\n ---------------------------------\n" + mNode.body);
                setIdentifiedPrivateVariablen();
                changeScroll();
            }
            forBodyRSyntaxTextArea.setCaretPosition(0);
        }
    }

    private int searchUniqId(int uniqId) {

        String searchString = GlobalFileHandler.SPLIT_VALUE_COMA + Integer.toString(uniqId) + GlobalFileHandler.SPLIT_VALUE_EQUAL;
        for (int i = 0; i < sourceArrayList.size(); i++) {
            if (sourceArrayList.get(i).trim().contains(searchString) && sourceArrayList.get(i).trim().contains(GlobalFileHandler.SPLIT_VALUE_MINUS)) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String args[]) {
        for (int i = 0; i < args.length; i++) {
            if (i == 0) {
                DIRECTORY_ADDRESS = args[i];
            }
        }
        java.awt.EventQueue.invokeLater(new Runnable() {

            @Override
            public void run() {
                new DisplayJFrame().setVisible(true);
            }
        });
    }

    private void loadSourceFile(boolean isReflectSourceCode) {
        try {
            if (!isReflectSourceCode) {
                sourceArrayList = GlobalFileHandler.readFileLineByLine(GlobalFileHandler.CODE_BUFFER_FILE);
                sourceString = GlobalFileHandler.readFileAsString(GlobalFileHandler.PROG_PRAGMA_NEST_0_FILE);
                filterSourceArrayList();
                save(GlobalFileHandler.TEMP_OUTPUT_FILE, (ArrayList<String>) sourceArrayList.clone());
                sourceString = GlobalFileHandler.readFileAsString(GlobalFileHandler.TEMP_OUTPUT_FILE);
            } else {
                save(GlobalFileHandler.TEMP_OUTPUT_FILE, (ArrayList<String>) sourceArrayList.clone());
                sourceString = GlobalFileHandler.readFileAsString(GlobalFileHandler.TEMP_OUTPUT_FILE);
            }
        } catch (FileNotFoundException ex) {
            JOptionPane.showConfirmDialog(this, ex.getMessage(), "Error", JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE);
            System.exit(0);
        } catch (IOException ex) {
            JOptionPane.showConfirmDialog(this, ex.getMessage(), "Error", JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE);
            System.exit(0);
        }
        sourceRSyntaxTextArea.setText(sourceString);
        sourceRSyntaxTextArea.setCaretPosition(0);
    }

    private void setMNodeCurrentUserPragma() {
        if (mNode.userPragma != null) {
            mNodeCurrentUserPragma = mNode.userPragma;
        } else {
            if (isNestedJToggelButton.isSelected()) {
                mNodeCurrentUserPragma = mNode.pragmaNested;
            } else {
                mNodeCurrentUserPragma = mNode.pragma;
            }
        }
        tempMNodeCurrentUserPragma = mNodeCurrentUserPragma;
        applyJButton.setEnabled(false);
    }

    private Node searchTree(int uniqId) {
        Enumeration<?> en = rootNode.depthFirstEnumeration();
        Node tempNode;
        while (en.hasMoreElements()) {
            if ((tempNode = (Node) en.nextElement()).UID == uniqId) {
                return tempNode;
            }
        }
        return null;
    }

    private void save(String path, ArrayList<String> tempSourceArrayList) {
        for (int i = 0; i < tempSourceArrayList.size(); i++) {
            if (tempSourceArrayList.get(i).trim().contains(GlobalFileHandler.NUM_THREADS_CONTAINS)) {
                tempSourceArrayList.set(i, "omp_set_num_threads(" + numberOfThreadsJSpinner.getValue().toString() + ");");
                continue;
            }
            if (tempSourceArrayList.get(i).trim().matches(GlobalFileHandler.SPLIT_VALUE_MINUS + "[0-9]+" + GlobalFileHandler.SPLIT_VALUE_COMA + "[0-9]+" + GlobalFileHandler.SPLIT_VALUE_EQUAL)) {
                String[] str = tempSourceArrayList.get(i).split(GlobalFileHandler.SPLIT_VALUE_EQUAL);
                String[] str1 = str[0].split(GlobalFileHandler.SPLIT_VALUE_COMA);
                int uniqId = Integer.parseInt(str1[1]);
                Node tempNode = searchTree(uniqId);
                if (tempNode != null) {
                    if (tempNode.isParallelizable) {
                        if (tempNode.userPragma != null) {
                            tempSourceArrayList.set(i, tempNode.userPragma);
                        } else {
                            if (isNestedJToggelButton.isSelected()) {
                                tempSourceArrayList.set(i, tempNode.pragmaNested);
                            } else {
                                if (tempNode.pragma != null) {
                                    tempSourceArrayList.set(i, tempNode.pragma);
                                } else {
                                    tempSourceArrayList.set(i, "");
                                }
                            }
                        }
                    } else {
                        tempSourceArrayList.set(i, "");
                    }
                } else {
                    tempSourceArrayList.set(i, "");
                }
            }
        }
        try {
            GlobalFileHandler.writeFileLineByLine(path, tempSourceArrayList);
        } catch (IOException ex) {
            JOptionPane.showConfirmDialog(this, ex.getMessage(), "Error", JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE);
            System.exit(0);
        }
    }

    private void changeScroll() {
        vertical.setValue(17 * searchUniqId(mNode.UID));
    }

    private void filterSourceArrayList() {
        for (int i = 0; i < sourceArrayList.size(); i++) {
            if (sourceArrayList.get(i).trim().equals(GlobalFileHandler.SPLIT_VALUE_START)) {
                sourceArrayList.remove(i);
                i--;
            }
        }
    }

    private void filterOutPutFile() {
        try {
            ArrayList<String> tempSourceArrayList = GlobalFileHandler.readFileLineByLine(GlobalFileHandler.OUTPUT_FILE);
            for (int i = 0; i < tempSourceArrayList.size(); i++) {
                if (tempSourceArrayList.get(i).trim().equals("")) {
                    tempSourceArrayList.remove(i);
                    i--;
                }
            }
            save(GlobalFileHandler.OUTPUT_FILE, tempSourceArrayList);

        } catch (FileNotFoundException ex) {
            JOptionPane.showConfirmDialog(this, ex.getMessage(), "Error", JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE);
            System.exit(0);
        } catch (IOException ex) {
            JOptionPane.showConfirmDialog(this, ex.getMessage(), "Error", JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE);
            System.exit(0);
        }
    }
}
