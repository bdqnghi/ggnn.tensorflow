public void clearSelection() {
    unselectedRegions.addAll(selectedRegions);
    selectedRegions.clear();
    repaint();
}
