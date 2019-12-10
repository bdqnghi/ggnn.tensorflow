public void selectAll() {
    selectedRegions.addAll(unselectedRegions);
    unselectedRegions.clear();
    repaint();
}
