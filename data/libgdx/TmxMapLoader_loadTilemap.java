/**
 * Loads the map data, given the XML root element and an {@link ImageResolver} used to return the tileset Textures
 * @param root the XML root element
 * @param tmxFile the Filehandle of the tmx file
 * @param imageResolver the {@link ImageResolver}
 * @return the {@link TiledMap}
 */
protected TiledMap loadTilemap(Element root, FileHandle tmxFile, ImageResolver imageResolver) {
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
    Element properties = root.getChildByName("properties");
    if (properties != null) {
        loadProperties(map.getProperties(), properties);
    }
    Array<Element> tilesets = root.getChildrenByName("tileset");
    for (Element element : tilesets) {
        loadTileSet(map, element, tmxFile, imageResolver);
        root.removeChild(element);
    }
    for (int i = 0, j = root.getChildCount(); i < j; i++) {
        Element element = root.getChild(i);
        String name = element.getName();
        if (name.equals("layer")) {
            loadTileLayer(map, element);
        } else if (name.equals("objectgroup")) {
            loadObjectGroup(map, element);
        } else if (name.equals("imagelayer")) {
            loadImageLayer(map, element, tmxFile, imageResolver);
        }
    }
    return map;
}
