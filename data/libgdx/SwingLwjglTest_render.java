@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    font.draw(batch, "Click to create a new window", 10, 100);
    batch.end();
    if (Gdx.input.justTouched()) {
        createWindow();
    }
}
