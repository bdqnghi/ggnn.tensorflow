/**
 * Sets the sides of this cubemap to the specified {@link CubemapData}.
 */
public void load(CubemapData data) {
    if (!data.isPrepared())
        data.prepare();
    bind();
    unsafeSetFilter(minFilter, magFilter, true);
    unsafeSetWrap(uWrap, vWrap, true);
    data.consumeCubemapData();
    Gdx.gl.glBindTexture(glTarget, 0);
}
