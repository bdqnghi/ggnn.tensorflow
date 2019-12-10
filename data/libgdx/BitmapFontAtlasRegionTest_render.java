@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    for (int i = 0; i < fonts.length; ++i) {
        fonts[i].draw(batch, testStrings[i], 16, 16 + 48 * i);
    }
    batch.end();
}
