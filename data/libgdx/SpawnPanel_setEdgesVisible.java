void setEdgesVisible(boolean visible) {
    edgesCheckbox.setVisible(visible);
    edgesLabel.setVisible(visible);
    visible = visible && edgesCheckbox.isSelected();
    sideCombo.setVisible(visible);
    sideLabel.setVisible(visible);
}
