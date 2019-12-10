@Override
public void end() {
    if (!drawing)
        throw new IllegalStateException("PolygonSpriteBatch.begin must be called before end.");
    if (vertexIndex > 0)
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
