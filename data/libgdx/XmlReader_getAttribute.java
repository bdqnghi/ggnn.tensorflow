public String getAttribute(String name, String defaultValue) {
    if (attributes == null)
        return defaultValue;
    String value = attributes.get(name);
    if (value == null)
        return defaultValue;
    return value;
}
