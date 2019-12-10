private void getTiles(int startX, int startY, int endX, int endY, Array<Rectangle> tiles) {
    TiledMapTileLayer layer = (TiledMapTileLayer) map.getLayers().get("walls");
    rectPool.freeAll(tiles);
    tiles.clear();
    for (int y = startY; y <= endY; y++) {
        for (int x = startX; x <= endX; x++) {
            Cell cell = layer.getCell(x, y);
            if (cell != null) {
                Rectangle rect = rectPool.obtain();
                rect.set(x, y, 1, 1);
                tiles.add(rect);
            }
        }
    }
}
