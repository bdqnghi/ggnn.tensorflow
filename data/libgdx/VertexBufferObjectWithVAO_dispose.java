/**
 * Disposes of all resources this VertexBufferObject uses.
 */
@Override
public void dispose() {
    GL30 gl = Gdx.gl30;
    gl.glBindBuffer(GL20.GL_ARRAY_BUFFER, 0);
    gl.glDeleteBuffer(bufferHandle);
    bufferHandle = 0;
    BufferUtils.disposeUnsafeByteBuffer(byteBuffer);
    if (gl.glIsVertexArray(vaoHandle)) {
        tmpHandle.clear();
        tmpHandle.put(vaoHandle);
        tmpHandle.flip();
        gl.glDeleteVertexArrays(1, tmpHandle);
    }
}
