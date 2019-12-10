protected void loadTileLayer(TiledMap map, Element element) {
    if (element.getName().equals("layer")) {
        int width = element.getIntAttribute("width", 0);
        int height = element.getIntAttribute("height", 0);
        int tileWidth = element.getParent().getIntAttribute("tilewidth", 0);
        int tileHeight = element.getParent().getIntAttribute("tileheight", 0);
        TiledMapTileLayer layer = new TiledMapTileLayer(width, height, tileWidth, tileHeight);
        loadBasicLayerInfo(layer, element);
        int[] ids = getTileIds(element, width, height);
        TiledMapTileSets tilesets = map.getTileSets();
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                int id = ids[y * width + x];
                boolean flipHorizontally = ((id & FLAG_FLIP_HORIZONTALLY) != 0);
                boolean flipVertically = ((id & FLAG_FLIP_VERTICALLY) != 0);
                boolean flipDiagonally = ((id & FLAG_FLIP_DIAGONALLY) != 0);
                TiledMapTile tile = tilesets.getTile(id & ~MASK_CLEAR);
                if (tile != null) {
                    Cell cell = createTileLayerCell(flipHorizontally, flipVertically, flipDiagonally);
                    cell.setTile(tile);
                    layer.setCell(x, flipY ? height - 1 - y : y, cell);
                }
            }
        }
        Element properties = element.getChildByName("properties");
        if (properties != null) {
            loadProperties(layer.getProperties(), properties);
        }
        map.getLayers().add(layer);
    }
}
