/**
 * Returns the attribute value with the specified name, or if no attribute is found, the text of a child with the name.
 * @throws GdxRuntimeException if no attribute or child was not found.
 */
public boolean getBoolean(String name, boolean defaultValue) {
    String value = get(name, null);
    if (value == null)
        return defaultValue;
    return Boolean.parseBoolean(value);
}
