/**
 * Sets the {@link TextureWrap} for this texture on the u and v axis. Assumes the texture is bound and active!
 * @param u the u wrap
 * @param v the v wrap
 * @param force True to always set the values, even if they are the same as the current values.
 */
public void unsafeSetWrap(TextureWrap u, TextureWrap v, boolean force) {
    if (u != null && (force || uWrap != u)) {
        Gdx.gl.glTexParameterf(glTarget, GL20.GL_TEXTURE_WRAP_S, u.getGLEnum());
        uWrap = u;
    }
    if (v != null && (force || vWrap != v)) {
        Gdx.gl.glTexParameterf(glTarget, GL20.GL_TEXTURE_WRAP_T, v.getGLEnum());
        vWrap = v;
    }
}
