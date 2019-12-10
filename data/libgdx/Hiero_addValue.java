public void addValue(final Value value) {
    JLabel valueNameLabel = new JLabel(value.getName() + ":");
    valuesPanel.add(valueNameLabel, new GridBagConstraints(0, -1, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 0, 0, 5), 0, 0));
    final JLabel valueValueLabel = new JLabel();
    valuesPanel.add(valueValueLabel, new GridBagConstraints(1, -1, 1, 1, 1.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.BOTH, new Insets(0, 0, 0, 5), 0, 0));
    valueValueLabel.setOpaque(true);
    if (value.getObject() instanceof java.awt.Color)
        valueValueLabel.setIcon(getColorIcon((java.awt.Color) value.getObject()));
    else
        valueValueLabel.setText(value.toString());
    valueValueLabel.addMouseListener(new MouseAdapter() {

        public void mouseEntered(MouseEvent evt) {
            valueValueLabel.setBackground(selectedColor);
        }

        public void mouseExited(MouseEvent evt) {
            valueValueLabel.setBackground(null);
        }

        public void mouseClicked(MouseEvent evt) {
            Object oldObject = value.getObject();
            value.showDialog();
            if (!value.getObject().equals(oldObject)) {
                effect.setValues(values);
                updateValues();
                updateFont();
            }
        }
    });
}
