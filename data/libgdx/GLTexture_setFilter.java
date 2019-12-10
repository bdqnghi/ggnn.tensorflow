/**
 * Sets the {@link TextureFilter} for this texture for minification and magnification. This will bind this texture!
 * @param minFilter the minification filter
 * @param magFilter the magnification filter
 */
public void setFilter(TextureFilter minFilter, TextureFilter magFilter) {
    this.minFilter = minFilter;
    this.magFilter = magFilter;
    bind();
    Gdx.gl.glTexParameterf(glTarget, GL20.GL_TEXTURE_MIN_FILTER, minFilter.getGLEnum());
    Gdx.gl.glTexParameterf(glTarget, GL20.GL_TEXTURE_MAG_FILTER, magFilter.getGLEnum());
}
