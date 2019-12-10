@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    if (texture != null)
        batch.draw(texture, 0, 0);
    batch.end();
}
