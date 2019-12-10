/**
 * Binds the texture to the given texture unit. Sets the currently active texture unit via {@link GL20#glActiveTexture(int)}.
 * @param unit the unit (0 to MAX_TEXTURE_UNITS).
 */
public void bind(int unit) {
    Gdx.gl.glActiveTexture(GL20.GL_TEXTURE0 + unit);
    Gdx.gl.glBindTexture(glTarget, glHandle);
}
