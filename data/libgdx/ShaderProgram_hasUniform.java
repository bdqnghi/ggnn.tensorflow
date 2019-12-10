/**
 * @param name the name of the uniform
 * @return whether the uniform is available in the shader
 */
public boolean hasUniform(String name) {
    return uniforms.containsKey(name);
}
