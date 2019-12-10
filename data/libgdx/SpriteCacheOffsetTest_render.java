public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    cache.begin();
    for (int y = 1; y < tileMapHeight - 1; y++) cache.draw(y, 1, tileMapWidth - 2);
    cache.end();
}
