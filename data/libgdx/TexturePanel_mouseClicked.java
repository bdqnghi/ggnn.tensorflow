public void mouseClicked(MouseEvent event) {
    float x = event.getX(), y = event.getY();
    for (TextureRegion region : unselectedRegions) {
        if (isInsideRegion(region, x, y)) {
            select(region);
            return;
        }
    }
    for (TextureRegion region : selectedRegions) {
        if (isInsideRegion(region, x, y)) {
            unselect(region);
            return;
        }
    }
}
