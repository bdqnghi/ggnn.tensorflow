/**
 * @param name the name of the attribute
 * @return the type of the attribute, one of {@link GL20#GL_FLOAT}, {@link GL20#GL_FLOAT_VEC2} etc.
 */
public int getAttributeType(String name) {
    return attributeTypes.get(name, 0);
}
