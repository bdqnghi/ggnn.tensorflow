private void uiStyle() {
    content.setBackground(new Color(36, 36, 36));
    content.setForeground(new Color(255, 255, 255));
    bottomPanel.setBackground(new Color(36, 36, 36));
    bottomPanel.setForeground(new Color(255, 255, 255));
    buttonPanel.setBackground(new Color(36, 36, 36));
    buttonPanel.setForeground(new Color(255, 255, 255));
    linkText.setForeground(new Color(20, 150, 20));
    contentPane.setBackground(new Color(36, 36, 36));
    Border line = BorderFactory.createLineBorder(new Color(80, 80, 80));
    Border empty = new EmptyBorder(4, 4, 4, 4);
    CompoundBorder border = new CompoundBorder(line, empty);
    mavenTextField.setBorder(border);
    mavenTextField.setCaretColor(new Color(255, 255, 255));
    mavenTextField.setBackground(new Color(46, 46, 46));
    mavenTextField.setForeground(new Color(255, 255, 255));
}
