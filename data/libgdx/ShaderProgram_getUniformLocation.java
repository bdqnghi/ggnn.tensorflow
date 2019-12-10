/**
 * @param name the name of the uniform
 * @return the location of the uniform or -1.
 */
public int getUniformLocation(String name) {
    return uniforms.get(name, -1);
}
