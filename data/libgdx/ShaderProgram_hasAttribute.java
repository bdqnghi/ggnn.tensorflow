/**
 * @param name the name of the attribute
 * @return whether the attribute is available in the shader
 */
public boolean hasAttribute(String name) {
    return attributes.containsKey(name);
}
