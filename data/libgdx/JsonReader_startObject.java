protected void startObject(String name) {
    JsonValue value = new JsonValue(ValueType.object);
    if (current != null)
        addChild(name, value);
    elements.add(value);
    current = value;
}
