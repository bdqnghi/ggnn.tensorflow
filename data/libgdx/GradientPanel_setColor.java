public void setColor(Color color) {
    if (selectedIndex == -1)
        return;
    colors.set(selectedIndex, color);
    repaint();
}
