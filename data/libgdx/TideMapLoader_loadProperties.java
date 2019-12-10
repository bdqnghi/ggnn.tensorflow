private void loadProperties(MapProperties properties, Element element) {
    if (element.getName().equals("Properties")) {
        for (Element property : element.getChildrenByName("Property")) {
            String key = property.getAttribute("Key", null);
            String type = property.getAttribute("Type", null);
            String value = property.getText();
            if (type.equals("Int32")) {
                properties.put(key, Integer.parseInt(value));
            } else if (type.equals("String")) {
                properties.put(key, value);
            } else if (type.equals("Boolean")) {
                properties.put(key, value.equalsIgnoreCase("true"));
            } else {
                properties.put(key, value);
            }
        }
    }
}
