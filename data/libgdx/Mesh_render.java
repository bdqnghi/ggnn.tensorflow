/**
 * <p>
 * Renders the mesh using the given primitive type. offset specifies the offset into either the vertex buffer or the index
 * buffer depending on whether indices are defined. count specifies the number of vertices or indices to use thus count /
 * #vertices per primitive primitives are rendered.
 * </p>
 *
 * <p>
 * This method will automatically bind each vertex attribute as specified at construction time via {@link VertexAttributes} to
 * the respective shader attributes. The binding is based on the alias defined for each VertexAttribute.
 * </p>
 *
 * <p>
 * This method must only be called after the {@link ShaderProgram#begin()} method has been called!
 * </p>
 *
 * <p>
 * This method is intended for use with OpenGL ES 2.0 and will throw an IllegalStateException when OpenGL ES 1.x is used.
 * </p>
 *
 * @param shader the shader to be used
 * @param primitiveType the primitive type
 * @param offset the offset into the vertex or index buffer
 * @param count number of vertices or indices to use
 * @param autoBind overrides the autoBind member of this Mesh
 */
public void render(ShaderProgram shader, int primitiveType, int offset, int count, boolean autoBind) {
    if (count == 0)
        return;
    if (autoBind)
        bind(shader);
    if (isVertexArray) {
        if (indices.getNumIndices() > 0) {
            ShortBuffer buffer = indices.getBuffer();
            int oldPosition = buffer.position();
            int oldLimit = buffer.limit();
            buffer.position(offset);
            buffer.limit(offset + count);
            Gdx.gl20.glDrawElements(primitiveType, count, GL20.GL_UNSIGNED_SHORT, buffer);
            buffer.position(oldPosition);
            buffer.limit(oldLimit);
        } else {
            Gdx.gl20.glDrawArrays(primitiveType, offset, count);
        }
    } else {
        if (indices.getNumIndices() > 0)
            Gdx.gl20.glDrawElements(primitiveType, count, GL20.GL_UNSIGNED_SHORT, offset * 2);
        else
            Gdx.gl20.glDrawArrays(primitiveType, offset, count);
    }
    if (autoBind)
        unbind(shader);
}
