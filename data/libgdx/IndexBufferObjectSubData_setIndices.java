public void setIndices(ShortBuffer indices) {
    int pos = indices.position();
    isDirty = true;
    buffer.clear();
    buffer.put(indices);
    buffer.flip();
    indices.position(pos);
    byteBuffer.position(0);
    byteBuffer.limit(buffer.limit() << 1);
    if (isBound) {
        Gdx.gl20.glBufferSubData(GL20.GL_ELEMENT_ARRAY_BUFFER, 0, byteBuffer.limit(), byteBuffer);
        isDirty = false;
    }
}
