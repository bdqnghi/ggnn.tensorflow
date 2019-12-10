/**
 * Sets up the render context, must be matched with a call to {@link #end()}. Assumes that the OpenGL states are in their
 * defaults.
 */
public void begin() {
    Gdx.gl.glDisable(GL20.GL_DEPTH_TEST);
    depthFunc = 0;
    Gdx.gl.glDepthMask(true);
    depthMask = true;
    Gdx.gl.glDisable(GL20.GL_BLEND);
    blending = false;
    Gdx.gl.glDisable(GL20.GL_CULL_FACE);
    cullFace = blendSFactor = blendDFactor = 0;
    textureBinder.begin();
}
