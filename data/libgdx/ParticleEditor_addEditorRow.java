void addEditorRow(JPanel row) {
    row.setBorder(BorderFactory.createMatteBorder(0, 0, 1, 0, java.awt.Color.black));
    editRowsPanel.add(row, new GridBagConstraints(0, -1, 1, 1, 1, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
}
