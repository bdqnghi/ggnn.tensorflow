private void loadLayer(TiledMap map, Element element) {
    if (element.getName().equals("Layer")) {
        String id = element.getAttribute("Id");
        String visible = element.getAttribute("Visible");
        Element dimensions = element.getChildByName("Dimensions");
        String layerSize = dimensions.getAttribute("LayerSize");
        String tileSize = dimensions.getAttribute("TileSize");
        String[] layerSizeParts = layerSize.split(" x ");
        int layerSizeX = Integer.parseInt(layerSizeParts[0]);
        int layerSizeY = Integer.parseInt(layerSizeParts[1]);
        String[] tileSizeParts = tileSize.split(" x ");
        int tileSizeX = Integer.parseInt(tileSizeParts[0]);
        int tileSizeY = Integer.parseInt(tileSizeParts[1]);
        TiledMapTileLayer layer = new TiledMapTileLayer(layerSizeX, layerSizeY, tileSizeX, tileSizeY);
        layer.setName(id);
        layer.setVisible(visible.equalsIgnoreCase("True"));
        Element tileArray = element.getChildByName("TileArray");
        Array<Element> rows = tileArray.getChildrenByName("Row");
        TiledMapTileSets tilesets = map.getTileSets();
        TiledMapTileSet currentTileSet = null;
        int firstgid = 0;
        int x, y;
        for (int row = 0, rowCount = rows.size; row < rowCount; row++) {
            Element currentRow = rows.get(row);
            y = rowCount - 1 - row;
            x = 0;
            for (int child = 0, childCount = currentRow.getChildCount(); child < childCount; child++) {
                Element currentChild = currentRow.getChild(child);
                String name = currentChild.getName();
                if (name.equals("TileSheet")) {
                    currentTileSet = tilesets.getTileSet(currentChild.getAttribute("Ref"));
                    firstgid = currentTileSet.getProperties().get("firstgid", Integer.class);
                } else if (name.equals("Null")) {
                    x += currentChild.getIntAttribute("Count");
                } else if (name.equals("Static")) {
                    Cell cell = new Cell();
                    cell.setTile(currentTileSet.getTile(firstgid + currentChild.getIntAttribute("Index")));
                    layer.setCell(x++, y, cell);
                } else if (name.equals("Animated")) {
                    // Create an AnimatedTile
                    int interval = currentChild.getInt("Interval");
                    Element frames = currentChild.getChildByName("Frames");
                    Array<StaticTiledMapTile> frameTiles = new Array<StaticTiledMapTile>();
                    for (int frameChild = 0, frameChildCount = frames.getChildCount(); frameChild < frameChildCount; frameChild++) {
                        Element frame = frames.getChild(frameChild);
                        String frameName = frame.getName();
                        if (frameName.equals("TileSheet")) {
                            currentTileSet = tilesets.getTileSet(frame.getAttribute("Ref"));
                            firstgid = currentTileSet.getProperties().get("firstgid", Integer.class);
                        } else if (frameName.equals("Static")) {
                            frameTiles.add((StaticTiledMapTile) currentTileSet.getTile(firstgid + frame.getIntAttribute("Index")));
                        }
                    }
                    Cell cell = new Cell();
                    cell.setTile(new AnimatedTiledMapTile(interval / 1000f, frameTiles));
                    // TODO: Reuse existing animated tiles
                    layer.setCell(x++, y, cell);
                }
            }
        }
        Element properties = element.getChildByName("Properties");
        if (properties != null) {
            loadProperties(layer.getProperties(), properties);
        }
        map.getLayers().add(layer);
    }
}
