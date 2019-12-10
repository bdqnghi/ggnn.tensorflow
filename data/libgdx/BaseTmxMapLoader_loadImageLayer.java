protected void loadImageLayer(TiledMap map, Element element, FileHandle tmxFile, ImageResolver imageResolver) {
    if (element.getName().equals("imagelayer")) {
        int x = Integer.parseInt(element.getAttribute("x", "0"));
        int y = Integer.parseInt(element.getAttribute("y", "0"));
        if (flipY)
            y = mapHeightInPixels - y;
        TextureRegion texture = null;
        Element image = element.getChildByName("image");
        if (image != null) {
            String source = image.getAttribute("source");
            FileHandle handle = getRelativeFileHandle(tmxFile, source);
            texture = imageResolver.getImage(handle.path());
            y -= texture.getRegionHeight();
        }
        TiledMapImageLayer layer = new TiledMapImageLayer(texture, x, y);
        loadBasicLayerInfo(layer, element);
        Element properties = element.getChildByName("properties");
        if (properties != null) {
            loadProperties(layer.getProperties(), properties);
        }
        map.getLayers().add(layer);
    }
}
