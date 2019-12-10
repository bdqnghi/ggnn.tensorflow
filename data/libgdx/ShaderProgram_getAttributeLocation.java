/**
 * @param name the name of the attribute
 * @return the location of the attribute or -1.
 */
public int getAttributeLocation(String name) {
    return attributes.get(name, -1);
}
