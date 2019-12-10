public boolean getBooleanAttribute(String name, boolean defaultValue) {
    String value = getAttribute(name, null);
    if (value == null)
        return defaultValue;
    return Boolean.parseBoolean(value);
}
