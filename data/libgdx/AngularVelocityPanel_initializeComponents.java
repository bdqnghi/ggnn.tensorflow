private void initializeComponents(DynamicsModifier.Angular aValue, String charTitle) {
    JPanel contentPanel = getContentPanel();
    {
        JPanel panel = new JPanel();
        panel.add(new JLabel("Global"), new GridBagConstraints(0, 0, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
        panel.add(isGlobalCheckBox = new JCheckBox(), new GridBagConstraints(1, 0, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
        contentPanel.add(panel, new GridBagConstraints(0, 1, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    }
    {
        contentPanel.add(magnitudePanel = new ScaledNumericPanel(editor, aValue == null ? null : aValue.strengthValue, charTitle, "Strength", "In world units per second.", true), new GridBagConstraints(0, 2, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 6), 0, 0));
    }
    {
        contentPanel.add(phiPanel = new ScaledNumericPanel(editor, aValue == null ? null : aValue.phiValue, charTitle, "Azimuth", "Rotation starting on Y", true), new GridBagConstraints(0, 4, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 6), 0, 0));
    }
    {
        contentPanel.add(thetaPanel = new ScaledNumericPanel(editor, aValue == null ? null : aValue.thetaValue, charTitle, "Polar angle", "around Y axis on XZ plane", true), new GridBagConstraints(0, 3, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 6), 0, 0));
    }
    {
        JPanel spacer = new JPanel();
        spacer.setPreferredSize(new Dimension());
        contentPanel.add(spacer, new GridBagConstraints(6, 0, 1, 1, 1, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    }
    magnitudePanel.setIsAlwayShown(true);
    phiPanel.setIsAlwayShown(true);
    thetaPanel.setIsAlwayShown(true);
    isGlobalCheckBox.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent e) {
            AngularVelocityPanel.this.value.isGlobal = isGlobalCheckBox.isSelected();
        }
    });
}
