@Override
public void begin() {
    if (drawing)
        throw new IllegalStateException("PolygonSpriteBatch.end must be called before begin.");
    renderCalls = 0;
    Gdx.gl.glDepthMask(false);
    if (customShader != null)
        customShader.begin();
    else
        shader.begin();
    setupMatrices();
    drawing = true;
}
