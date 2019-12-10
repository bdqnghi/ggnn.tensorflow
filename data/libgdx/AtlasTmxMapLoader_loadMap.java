protected TiledMap loadMap(Element root, FileHandle tmxFile, AtlasResolver resolver) {
    TiledMap map = new TiledMap();
    String mapOrientation = root.getAttribute("orientation", null);
    int mapWidth = root.getIntAttribute("width", 0);
    int mapHeight = root.getIntAttribute("height", 0);
    int tileWidth = root.getIntAttribute("tilewidth", 0);
    int tileHeight = root.getIntAttribute("tileheight", 0);
    String mapBackgroundColor = root.getAttribute("backgroundcolor", null);
    MapProperties mapProperties = map.getProperties();
    if (mapOrientation != null) {
        mapProperties.put("orientation", mapOrientation);
    }
    mapProperties.put("width", mapWidth);
    mapProperties.put("height", mapHeight);
    mapProperties.put("tilewidth", tileWidth);
    mapProperties.put("tileheight", tileHeight);
    if (mapBackgroundColor != null) {
        mapProperties.put("backgroundcolor", mapBackgroundColor);
    }
    mapTileWidth = tileWidth;
    mapTileHeight = tileHeight;
    mapWidthInPixels = mapWidth * tileWidth;
    mapHeightInPixels = mapHeight * tileHeight;
    if (mapOrientation != null) {
        if ("staggered".equals(mapOrientation)) {
            if (mapHeight > 1) {
                mapWidthInPixels += tileWidth / 2;
                mapHeightInPixels = mapHeightInPixels / 2 + tileHeight / 2;
            }
        }
    }
    for (int i = 0, j = root.getChildCount(); i < j; i++) {
        Element element = root.getChild(i);
        String elementName = element.getName();
        if (elementName.equals("properties")) {
            loadProperties(map.getProperties(), element);
        } else if (elementName.equals("tileset")) {
            loadTileset(map, element, tmxFile, resolver);
        } else if (elementName.equals("layer")) {
            loadTileLayer(map, element);
        } else if (elementName.equals("objectgroup")) {
            loadObjectGroup(map, element);
        }
    }
    return map;
}
