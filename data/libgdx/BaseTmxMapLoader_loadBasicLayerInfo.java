protected void loadBasicLayerInfo(MapLayer layer, Element element) {
    String name = element.getAttribute("name", null);
    float opacity = Float.parseFloat(element.getAttribute("opacity", "1.0"));
    boolean visible = element.getIntAttribute("visible", 1) == 1;
    layer.setName(name);
    layer.setOpacity(opacity);
    layer.setVisible(visible);
}
