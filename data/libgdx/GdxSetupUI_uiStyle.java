private void uiStyle() {
    nameText.setCaretColor(Color.WHITE);
    packageText.setCaretColor(Color.WHITE);
    gameClassText.setCaretColor(Color.WHITE);
    destinationText.setCaretColor(Color.WHITE);
    sdkLocationText.setCaretColor(Color.WHITE);
    nameLabel.setForeground(Color.WHITE);
    packageLabel.setForeground(Color.WHITE);
    gameClassLabel.setForeground(Color.WHITE);
    destinationLabel.setForeground(Color.WHITE);
    sdkLocationLabel.setForeground(Color.WHITE);
    sdkLocationText.setDisabledTextColor(Color.GRAY);
    projectsLabel.setForeground(new Color(255, 20, 20));
    extensionsLabel.setForeground(new Color(255, 20, 20));
    subProjectsPanel.setOpaque(true);
    subProjectsPanel.setBackground(new Color(46, 46, 46));
    for (JPanel extensionPanel : extensionsPanels) {
        extensionPanel.setOpaque(true);
        extensionPanel.setBackground(new Color(46, 46, 46));
    }
}
