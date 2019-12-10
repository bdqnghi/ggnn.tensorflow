/**
 * Disposes of all resources this VertexBufferObject uses.
 */
@Override
public void dispose() {
    GL20 gl = Gdx.gl20;
    gl.glBindBuffer(GL20.GL_ARRAY_BUFFER, 0);
    gl.glDeleteBuffer(bufferHandle);
    bufferHandle = 0;
}
