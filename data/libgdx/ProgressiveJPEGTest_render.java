@Override
public void render() {
    Gdx.gl.glClearColor(1, 1, 1, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    drawable.draw(batch, 0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    batch.end();
}
