public int getIntAttribute(String name, int defaultValue) {
    String value = getAttribute(name, null);
    if (value == null)
        return defaultValue;
    return Integer.parseInt(value);
}
