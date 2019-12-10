public void setIndices(ShortBuffer indices) {
    isDirty = true;
    buffer.clear();
    buffer.put(indices);
    buffer.flip();
    if (isBound) {
        Gdx.gl20.glBufferData(GL20.GL_ELEMENT_ARRAY_BUFFER, buffer.limit(), buffer, usage);
        isDirty = false;
    }
}
