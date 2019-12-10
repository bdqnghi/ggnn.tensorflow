private void initializeComponents() {
    JPanel contentPanel = getContentPanel();
    {
        JLabel label = new JLabel("Value:");
        contentPanel.add(label, new GridBagConstraints(0, 1, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 0, 0, 6), 0, 0));
    }
    {
        valueSpinner = new JSpinner(new SpinnerNumberModel(new Float(0), new Float(-99999), new Float(99999), new Float(0.1f)));
        contentPanel.add(valueSpinner, new GridBagConstraints(1, 1, 1, 1, 1, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    }
}
