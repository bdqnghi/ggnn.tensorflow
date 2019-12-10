void updateActive() {
    contentPanel.setVisible(activeButton.isSelected());
    advancedPanel.setVisible(activeButton.isSelected() && advancedButton.isSelected());
    advancedButton.setVisible(activeButton.isSelected() && hasAdvanced);
    descriptionLabel.setText(activeButton.isSelected() ? description : "");
    if (value != null)
        value.setActive(activeButton.isSelected());
}
