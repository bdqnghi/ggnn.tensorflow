/**
 * @param name the name of the attribute
 * @return the size of the attribute or 0.
 */
public int getAttributeSize(String name) {
    return attributeSizes.get(name, 0);
}
