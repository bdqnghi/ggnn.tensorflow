/**
 * Binds this IndexBufferObject for rendering with glDrawElements.
 */
public void bind() {
    if (bufferHandle == 0)
        throw new GdxRuntimeException("buuh");
    Gdx.gl20.glBindBuffer(GL20.GL_ELEMENT_ARRAY_BUFFER, bufferHandle);
    if (isDirty) {
        byteBuffer.limit(buffer.limit() * 2);
        Gdx.gl20.glBufferSubData(GL20.GL_ELEMENT_ARRAY_BUFFER, 0, byteBuffer.limit(), byteBuffer);
        isDirty = false;
    }
    isBound = true;
}
