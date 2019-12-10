public boolean showValueDialog(final JComponent component, String description) {
    ValueDialog dialog = new ValueDialog(component, name, description);
    dialog.setTitle(name);
    dialog.setLocationRelativeTo(null);
    EventQueue.invokeLater(new Runnable() {

        public void run() {
            JComponent focusComponent = component;
            if (focusComponent instanceof JSpinner)
                focusComponent = ((JSpinner.DefaultEditor) ((JSpinner) component).getEditor()).getTextField();
            focusComponent.requestFocusInWindow();
        }
    });
    dialog.setVisible(true);
    return dialog.okPressed;
}
