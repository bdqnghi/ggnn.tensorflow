@Override
public void render() {
    Gdx.gl.glClear(GL10.GL_COLOR_BUFFER_BIT);
    batch.begin();
    font.draw(batch, results, 20, 300);
    batch.end();
}
