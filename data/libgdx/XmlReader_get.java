/**
 * Returns the attribute value with the specified name, or if no attribute is found, the text of a child with the name.
 * @throws GdxRuntimeException if no attribute or child was not found.
 */
public String get(String name, String defaultValue) {
    if (attributes != null) {
        String value = attributes.get(name);
        if (value != null)
            return value;
    }
    Element child = getChildByName(name);
    if (child == null)
        return defaultValue;
    String value = child.getText();
    if (value == null)
        return defaultValue;
    return value;
}
