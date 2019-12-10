@Override
public void end() {
    if (!drawing)
        throw new IllegalStateException("SpriteBatch.begin must be called before end.");
    if (idx > 0)
        flush();
    lastTexture = null;
    drawing = false;
    GL20 gl = Gdx.gl;
    gl.glDepthMask(true);
    if (isBlendingEnabled())
        gl.glDisable(GL20.GL_BLEND);
    if (customShader != null)
        customShader.end();
    else
        shader.end();
}
