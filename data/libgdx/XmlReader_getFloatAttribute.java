public float getFloatAttribute(String name, float defaultValue) {
    String value = getAttribute(name, null);
    if (value == null)
        return defaultValue;
    return Float.parseFloat(value);
}
