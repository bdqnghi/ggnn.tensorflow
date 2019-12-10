private void initializeComponents() {
    JPanel contentPanel = getContentPanel();
    {
        JLabel label = new JLabel("Additive:");
        contentPanel.add(label, new GridBagConstraints(0, 1, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    }
    {
        additiveCheckbox = new JCheckBox();
        contentPanel.add(additiveCheckbox, new GridBagConstraints(1, 1, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 6, 0, 0), 0, 0));
    }
    {
        JLabel label = new JLabel("Attached:");
        contentPanel.add(label, new GridBagConstraints(0, 2, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    }
    {
        attachedCheckBox = new JCheckBox();
        contentPanel.add(attachedCheckBox, new GridBagConstraints(1, 2, 1, 1, 1, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 6, 0, 0), 0, 0));
    }
    {
        JLabel label = new JLabel("Continuous:");
        contentPanel.add(label, new GridBagConstraints(0, 3, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    }
    {
        continuousCheckbox = new JCheckBox();
        contentPanel.add(continuousCheckbox, new GridBagConstraints(1, 3, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 6, 0, 0), 0, 0));
    }
    {
        JLabel label = new JLabel("Aligned:");
        contentPanel.add(label, new GridBagConstraints(0, 4, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    }
    {
        alignedCheckbox = new JCheckBox();
        contentPanel.add(alignedCheckbox, new GridBagConstraints(1, 4, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 6, 0, 0), 0, 0));
    }
    {
        JLabel label = new JLabel("Behind:");
        contentPanel.add(label, new GridBagConstraints(0, 5, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    }
    {
        behindCheckbox = new JCheckBox();
        contentPanel.add(behindCheckbox, new GridBagConstraints(1, 5, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 6, 0, 0), 0, 0));
    }
    {
        JLabel label = new JLabel("Premultiplied Alpha:");
        contentPanel.add(label, new GridBagConstraints(0, 6, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    }
    {
        premultipliedAlphaCheckbox = new JCheckBox();
        contentPanel.add(premultipliedAlphaCheckbox, new GridBagConstraints(1, 6, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 6, 0, 0), 0, 0));
    }
}
