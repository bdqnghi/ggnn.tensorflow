public void render() {
    Gdx.gl.glClearColor(0.6f, 0.6f, 0.6f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    batch.draw(region, 0, 0);
    batch.end();
}
