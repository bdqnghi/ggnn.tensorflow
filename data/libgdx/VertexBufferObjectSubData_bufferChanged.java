private void bufferChanged() {
    if (isBound) {
        Gdx.gl20.glBufferSubData(GL20.GL_ARRAY_BUFFER, 0, byteBuffer.limit(), byteBuffer);
        isDirty = false;
    }
}
