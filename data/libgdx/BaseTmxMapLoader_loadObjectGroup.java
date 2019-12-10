protected void loadObjectGroup(TiledMap map, Element element) {
    if (element.getName().equals("objectgroup")) {
        String name = element.getAttribute("name", null);
        MapLayer layer = new MapLayer();
        layer.setName(name);
        Element properties = element.getChildByName("properties");
        if (properties != null) {
            loadProperties(layer.getProperties(), properties);
        }
        for (Element objectElement : element.getChildrenByName("object")) {
            loadObject(map, layer, objectElement);
        }
        map.getLayers().add(layer);
    }
}
