public void mouseClicked(MouseEvent event) {
    if (!activeButton.isVisible())
        return;
    activeButton.setSelected(!activeButton.isSelected());
    updateActive();
}
