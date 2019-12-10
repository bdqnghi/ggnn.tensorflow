protected void loadProperties(MapProperties properties, Element element) {
    if (element == null)
        return;
    if (element.getName().equals("properties")) {
        for (Element property : element.getChildrenByName("property")) {
            String name = property.getAttribute("name", null);
            String value = property.getAttribute("value", null);
            if (value == null) {
                value = property.getText();
            }
            properties.put(name, value);
        }
    }
}
