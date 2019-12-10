public void getTextInput(final TextInputListener listener, final String title, final String text, final String hint) {
    SwingUtilities.invokeLater(new Runnable() {

        public void run() {
            JPanel panel = new JPanel(new FlowLayout());
            JPanel textPanel = new JPanel() {

                public boolean isOptimizedDrawingEnabled() {
                    return false;
                }
            };
            textPanel.setLayout(new OverlayLayout(textPanel));
            panel.add(textPanel);
            final JTextField textField = new JTextField(20);
            textField.setText(text);
            textField.setAlignmentX(0.0f);
            textPanel.add(textField);
            final JLabel placeholderLabel = new JLabel(hint);
            placeholderLabel.setForeground(Color.GRAY);
            placeholderLabel.setAlignmentX(0.0f);
            textPanel.add(placeholderLabel, 0);
            textField.getDocument().addDocumentListener(new DocumentListener() {

                public void removeUpdate(DocumentEvent event) {
                    this.updated();
                }

                public void insertUpdate(DocumentEvent event) {
                    this.updated();
                }

                public void changedUpdate(DocumentEvent event) {
                    this.updated();
                }

                private void updated() {
                    placeholderLabel.setVisible(textField.getText().length() == 0);
                }
            });
            JOptionPane pane = new JOptionPane(panel, JOptionPane.QUESTION_MESSAGE, JOptionPane.OK_CANCEL_OPTION, null, null, null);
            pane.setComponentOrientation(JOptionPane.getRootFrame().getComponentOrientation());
            pane.selectInitialValue();
            placeholderLabel.setBorder(new EmptyBorder(textField.getBorder().getBorderInsets(textField)));
            JDialog dialog = pane.createDialog(null, title);
            dialog.addWindowFocusListener(new WindowFocusListener() {

                public void windowLostFocus(WindowEvent arg0) {
                }

                public void windowGainedFocus(WindowEvent arg0) {
                    textField.requestFocusInWindow();
                }
            });
            dialog.setVisible(true);
            dialog.dispose();
            Object selectedValue = pane.getValue();
            if (selectedValue != null && (selectedValue instanceof Integer) && (Integer) selectedValue == JOptionPane.OK_OPTION)
                listener.input(textField.getText());
            else
                listener.canceled();
        }
    });
}
