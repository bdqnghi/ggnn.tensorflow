/**
 * Binds this IndexBufferObject for rendering with glDrawElements.
 */
public void bind() {
    if (bufferHandle == 0)
        throw new GdxRuntimeException("No buffer allocated!");
    Gdx.gl20.glBindBuffer(GL20.GL_ELEMENT_ARRAY_BUFFER, bufferHandle);
    if (isDirty) {
        Gdx.gl20.glBufferData(GL20.GL_ELEMENT_ARRAY_BUFFER, buffer.limit(), buffer, usage);
        isDirty = false;
    }
    isBound = true;
}
