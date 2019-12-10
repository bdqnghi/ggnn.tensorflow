@Override
public void render() {
    Gdx.gl.glClearColor(100f / 255f, 100f / 255f, 250f / 255f, 1f);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    camera.update();
    assetManager.update();
    if (renderer == null && assetManager.isLoaded(fileName)) {
        map = assetManager.get(fileName);
        renderer = new OrthogonalTiledMapRenderer(map, 1f / 32f);
    } else if (renderer != null) {
        renderer.setView(camera);
        renderer.render();
    }
    batch.begin();
    if (errorMessage != null)
        font.draw(batch, "ERROR (OK if running in GWT): " + errorMessage, 10, 50);
    font.draw(batch, "FPS: " + Gdx.graphics.getFramesPerSecond(), 10, 20);
    batch.end();
}
