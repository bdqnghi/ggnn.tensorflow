/**
 * Sets the {@link TextureFilter} for this texture for minification and magnification. Assumes the texture is bound and active!
 * @param minFilter the minification filter
 * @param magFilter the magnification filter
 * @param force True to always set the values, even if they are the same as the current values.
 */
public void unsafeSetFilter(TextureFilter minFilter, TextureFilter magFilter, boolean force) {
    if (minFilter != null && (force || this.minFilter != minFilter)) {
        Gdx.gl.glTexParameterf(glTarget, GL20.GL_TEXTURE_MIN_FILTER, minFilter.getGLEnum());
        this.minFilter = minFilter;
    }
    if (magFilter != null && (force || this.magFilter != magFilter)) {
        Gdx.gl.glTexParameterf(glTarget, GL20.GL_TEXTURE_MAG_FILTER, magFilter.getGLEnum());
        this.magFilter = magFilter;
    }
}
