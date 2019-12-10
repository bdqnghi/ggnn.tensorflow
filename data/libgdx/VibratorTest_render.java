@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    font.draw(batch, "Touch screen to vibrate", 100, 100);
    batch.end();
    if (Gdx.input.justTouched())
        Gdx.input.vibrate(100);
}
