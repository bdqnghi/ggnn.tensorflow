private void bufferChanged() {
    if (isBound) {
        Gdx.gl20.glBufferData(GL20.GL_ARRAY_BUFFER, buffer.limit(), buffer, usage);
        isDirty = false;
    }
}
