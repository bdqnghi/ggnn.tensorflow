/**
 * Disposes this IndexBufferObject and all its associated OpenGL resources.
 */
public void dispose() {
    GL20 gl = Gdx.gl20;
    gl.glBindBuffer(GL20.GL_ELEMENT_ARRAY_BUFFER, 0);
    gl.glDeleteBuffer(bufferHandle);
    bufferHandle = 0;
}
