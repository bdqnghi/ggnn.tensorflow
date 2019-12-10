/**
 * Resets all changed OpenGL states to their defaults.
 */
public void end() {
    if (depthFunc != 0)
        Gdx.gl.glDisable(GL20.GL_DEPTH_TEST);
    if (!depthMask)
        Gdx.gl.glDepthMask(true);
    if (blending)
        Gdx.gl.glDisable(GL20.GL_BLEND);
    if (cullFace > 0)
        Gdx.gl.glDisable(GL20.GL_CULL_FACE);
    textureBinder.end();
}
