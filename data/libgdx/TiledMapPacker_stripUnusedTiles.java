private void stripUnusedTiles() {
    int mapWidth = map.getProperties().get("width", Integer.class);
    int mapHeight = map.getProperties().get("height", Integer.class);
    int numlayers = map.getLayers().getCount();
    int bucketSize = mapWidth * mapHeight * numlayers;
    Iterator<MapLayer> it = map.getLayers().iterator();
    while (it.hasNext()) {
        MapLayer layer = it.next();
        // some layers can be plain MapLayer instances (ie. object groups), just ignore them
        if (layer instanceof TiledMapTileLayer) {
            TiledMapTileLayer tlayer = (TiledMapTileLayer) layer;
            for (int y = 0; y < mapHeight; ++y) {
                for (int x = 0; x < mapWidth; ++x) {
                    if (tlayer.getCell(x, y) != null) {
                        TiledMapTile tile = tlayer.getCell(x, y).getTile();
                        if (tile instanceof AnimatedTiledMapTile) {
                            AnimatedTiledMapTile aTile = (AnimatedTiledMapTile) tile;
                            for (StaticTiledMapTile t : aTile.getFrameTiles()) {
                                addTile(t, bucketSize);
                            }
                        }
                        // Adds non-animated tiles and the base animated tile
                        addTile(tile, bucketSize);
                    }
                }
            }
        }
    }
}
