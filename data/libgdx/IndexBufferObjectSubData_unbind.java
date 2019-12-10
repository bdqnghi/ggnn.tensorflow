/**
 * Unbinds this IndexBufferObject.
 */
public void unbind() {
    Gdx.gl20.glBindBuffer(GL20.GL_ELEMENT_ARRAY_BUFFER, 0);
    isBound = false;
}
