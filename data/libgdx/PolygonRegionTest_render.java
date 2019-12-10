@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    Gdx.gl.glClearColor(0.25f, 0.25f, 0.25f, 1.0f);
    camera.update();
    batch.setProjectionMatrix(camera.combined);
    batch.begin();
    // draw bot regions side-by-side
    float width = 256;
    float x = -width;
    batch.draw(region, x, -128, 256, 256);
    batch.draw(region2, x + width + 10, -128, 256, 256);
    batch.end();
    debugRenderer.setProjectionMatrix(camera.combined);
    debugRenderer.draw(region, x, -128, 0, 0, 256, 256, 1, 1, 0);
    debugRenderer.draw(region2, x + width + 10, -128, 0, 0, 256, 256, 1, 1, 0);
}
