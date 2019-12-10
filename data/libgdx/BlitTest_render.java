public void render() {
    Gdx.gl.glClearColor(0.4f, 0.4f, 0.4f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    batch.draw(rgb888, 0, 0);
    batch.draw(rgba8888, 60, 0);
    batch.draw(psRgb888, 0, 60);
    batch.draw(psRgba8888, psRgb888.getWidth() + 20, 60);
    batch.end();
}
