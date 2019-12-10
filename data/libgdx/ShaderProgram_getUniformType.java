/**
 * @param name the name of the uniform
 * @return the type of the uniform, one of {@link GL20#GL_FLOAT}, {@link GL20#GL_FLOAT_VEC2} etc.
 */
public int getUniformType(String name) {
    return uniformTypes.get(name, 0);
}
