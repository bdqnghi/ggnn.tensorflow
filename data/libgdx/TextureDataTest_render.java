public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    spriteBatch.begin();
    spriteBatch.draw(texture, 100, 100);
    spriteBatch.end();
}
