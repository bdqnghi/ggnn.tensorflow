/**
 * Loads the map data, given the XML root element and an {@link ImageResolver} used to return the tileset Textures
 * @param root the XML root element
 * @param tmxFile the Filehandle of the tmx file
 * @param imageResolver the {@link ImageResolver}
 * @return the {@link TiledMap}
 */
private TiledMap loadMap(Element root, FileHandle tmxFile, ImageResolver imageResolver) {
    TiledMap map = new TiledMap();
    Element properties = root.getChildByName("Properties");
    if (properties != null) {
        loadProperties(map.getProperties(), properties);
    }
    Element tilesheets = root.getChildByName("TileSheets");
    for (Element tilesheet : tilesheets.getChildrenByName("TileSheet")) {
        loadTileSheet(map, tilesheet, tmxFile, imageResolver);
    }
    Element layers = root.getChildByName("Layers");
    for (Element layer : layers.getChildrenByName("Layer")) {
        loadLayer(map, layer);
    }
    return map;
}
