public void setAttribute(String name, String value) {
    if (attributes == null)
        attributes = new ObjectMap(8);
    attributes.put(name, value);
}
