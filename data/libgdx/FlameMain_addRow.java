void addRow(JPanel panel, JPanel row, float wx, float wy) {
    row.setBorder(BorderFactory.createMatteBorder(0, 0, 2, 0, java.awt.Color.black));
    panel.add(row, new GridBagConstraints(0, -1, 1, 1, wx, wy, GridBagConstraints.NORTH, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
}
