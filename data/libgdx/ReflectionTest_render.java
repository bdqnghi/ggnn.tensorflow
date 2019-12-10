@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    font.draw(batch, message, 20, Gdx.graphics.getHeight() - 20);
    batch.end();
}
