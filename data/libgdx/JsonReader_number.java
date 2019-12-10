protected void number(String name, long value, String stringValue) {
    addChild(name, new JsonValue(value, stringValue));
}
