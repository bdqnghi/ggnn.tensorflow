@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    if (image != null) {
        batch.begin();
        batch.draw(image, 100, 100);
        batch.end();
    } else {
        batch.begin();
        font.draw(batch, "Downloading...", 100, 100);
        batch.end();
    }
}
