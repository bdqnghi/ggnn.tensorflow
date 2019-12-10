protected void startArray(String name) {
    JsonValue value = new JsonValue(ValueType.array);
    if (current != null)
        addChild(name, value);
    elements.add(value);
    current = value;
}
