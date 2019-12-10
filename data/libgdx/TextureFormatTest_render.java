@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    for (int i = 0; i < 6; i++) {
        batch.draw(nonMipMapped[i], i * 32, 0);
    }
    for (int i = 0; i < 6; i++) {
        batch.draw(mipMapped[i], i * 32, 32);
    }
    batch.end();
}
