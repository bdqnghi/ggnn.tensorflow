private void initializeComponents() {
    JPanel contentPanel = getContentPanel();
    {
        JLabel label = new JLabel("Shape:");
        contentPanel.add(label, new GridBagConstraints(0, 1, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 0, 0, 6), 0, 0));
    }
    {
        shapeCombo = new JComboBox();
        shapeCombo.setModel(new DefaultComboBoxModel(SpawnShape.values()));
        contentPanel.add(shapeCombo, new GridBagConstraints(1, 1, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    }
    {
        edgesLabel = new JLabel("Edges:");
        contentPanel.add(edgesLabel, new GridBagConstraints(2, 1, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 12, 0, 6), 0, 0));
    }
    {
        edgesCheckbox = new JCheckBox();
        contentPanel.add(edgesCheckbox, new GridBagConstraints(3, 1, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    }
    {
        sideLabel = new JLabel("Side:");
        contentPanel.add(sideLabel, new GridBagConstraints(4, 1, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 12, 0, 6), 0, 0));
    }
    {
        sideCombo = new JComboBox();
        sideCombo.setModel(new DefaultComboBoxModel(SpawnEllipseSide.values()));
        contentPanel.add(sideCombo, new GridBagConstraints(5, 1, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    }
    {
        JPanel spacer = new JPanel();
        spacer.setPreferredSize(new Dimension());
        contentPanel.add(spacer, new GridBagConstraints(6, 0, 1, 1, 1, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    }
}
