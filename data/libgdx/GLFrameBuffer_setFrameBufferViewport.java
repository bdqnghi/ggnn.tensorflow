/**
 * Sets viewport to the dimensions of framebuffer. Called by {@link #begin()}.
 */
protected void setFrameBufferViewport() {
    Gdx.gl20.glViewport(0, 0, colorTexture.getWidth(), colorTexture.getHeight());
}
