/**
 * Sets the {@link TextureWrap} for this texture on the u and v axis. This will bind this texture!
 * @param u the u wrap
 * @param v the v wrap
 */
public void setWrap(TextureWrap u, TextureWrap v) {
    this.uWrap = u;
    this.vWrap = v;
    bind();
    Gdx.gl.glTexParameterf(glTarget, GL20.GL_TEXTURE_WRAP_S, u.getGLEnum());
    Gdx.gl.glTexParameterf(glTarget, GL20.GL_TEXTURE_WRAP_T, v.getGLEnum());
}
