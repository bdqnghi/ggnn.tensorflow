/**
 * Bind the side, making it active to render on. Should be called in between a call to {@link #begin()} and {@link #end()}.
 * @param side The side to bind
 */
protected void bindSide(final Cubemap.CubemapSide side) {
    Gdx.gl20.glFramebufferTexture2D(GL20.GL_FRAMEBUFFER, GL20.GL_COLOR_ATTACHMENT0, side.glEnum, colorTexture.getTextureObjectHandle(), 0);
}
