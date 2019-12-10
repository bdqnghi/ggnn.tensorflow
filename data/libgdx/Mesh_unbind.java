/**
 * Unbinds the underlying {@link VertexBufferObject} and {@link IndexBufferObject} is indices were given. Use this with OpenGL
 * ES 1.x and when auto-bind is disabled.
 *
 * @param shader the shader (does not unbind the shader)
 * @param locations array containing the attribute locations.
 */
public void unbind(final ShaderProgram shader, final int[] locations) {
    vertices.unbind(shader, locations);
    if (indices.getNumIndices() > 0)
        indices.unbind();
}
