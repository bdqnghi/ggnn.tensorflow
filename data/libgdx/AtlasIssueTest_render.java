public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    sprite.draw(batch);
    font.draw(batch, "fps:" + Gdx.graphics.getFramesPerSecond(), 26, 65);
    batch.end();
}
