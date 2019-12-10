@Override
protected void paintComponent(Graphics g) {
    super.paintComponent(g);
    draw(g, unselectedRegions, unselectedColor, false);
    draw(g, selectedRegions, selectedColor, true);
}
