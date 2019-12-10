@Override
protected void initializeComponents() {
    super.initializeComponents();
    JPanel contentPanel = getContentPanel();
    // XYZ
    contentPanel.add(new JLabel("XYZ:"), new GridBagConstraints(0, 1, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    drawXYZCheckBox = new JCheckBox();
    contentPanel.add(drawXYZCheckBox, new GridBagConstraints(1, 1, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 6, 0, 0), 0, 0));
    // XZ Plane
    contentPanel.add(new JLabel("XZ Plane:"), new GridBagConstraints(0, 2, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    drawXZPlaneBox = new JCheckBox();
    contentPanel.add(drawXZPlaneBox, new GridBagConstraints(1, 2, 1, 1, 1, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 6, 0, 0), 0, 0));
    // XY Plane
    contentPanel.add(new JLabel("XY Plane:"), new GridBagConstraints(0, 3, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    drawXYPlaneBox = new JCheckBox();
    contentPanel.add(drawXYPlaneBox, new GridBagConstraints(1, 3, 1, 1, 1, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 6, 0, 0), 0, 0));
    // Listeners
    drawXYZCheckBox.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent event) {
            DrawPanel.this.editor.getRenderer().setDrawXYZ(drawXYZCheckBox.isSelected());
        }
    });
    drawXYZCheckBox.setSelected(editor.getRenderer().IsDrawXYZ());
    drawXZPlaneBox.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent event) {
            DrawPanel.this.editor.getRenderer().setDrawXZPlane(drawXZPlaneBox.isSelected());
        }
    });
    drawXZPlaneBox.setSelected(editor.getRenderer().IsDrawXZPlane());
    drawXYPlaneBox.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent event) {
            DrawPanel.this.editor.getRenderer().setDrawXYPlane(drawXYPlaneBox.isSelected());
        }
    });
}
