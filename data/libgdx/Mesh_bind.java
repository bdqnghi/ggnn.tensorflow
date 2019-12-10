/**
 * Binds the underlying {@link VertexBufferObject} and {@link IndexBufferObject} if indices where given. Use this with OpenGL
 * ES 2.0 and when auto-bind is disabled.
 *
 * @param shader the shader (does not bind the shader)
 * @param locations array containing the attribute locations.
 */
public void bind(final ShaderProgram shader, final int[] locations) {
    vertices.bind(shader, locations);
    if (indices.getNumIndices() > 0)
        indices.bind();
}
