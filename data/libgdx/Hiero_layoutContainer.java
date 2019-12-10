public void layoutContainer(Container parent) {
    Dimension buttonSize = upButton.getPreferredSize();
    int upButtonX = getWidth() - buttonSize.width * 3 - 6 - 5;
    upButton.setBounds(upButtonX, 0, buttonSize.width, buttonSize.height);
    downButton.setBounds(getWidth() - buttonSize.width * 2 - 3 - 5, 0, buttonSize.width, buttonSize.height);
    deleteButton.setBounds(getWidth() - buttonSize.width - 5, 0, buttonSize.width, buttonSize.height);
    Dimension labelSize = nameLabel.getPreferredSize();
    nameLabel.setBounds(5, buttonSize.height / 2 - labelSize.height / 2, getWidth() - 5, labelSize.height);
}
