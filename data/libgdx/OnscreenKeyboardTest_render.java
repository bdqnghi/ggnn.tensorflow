public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    font.draw(batch, "input: " + text, 0, Gdx.graphics.getHeight());
    batch.end();
    if (Gdx.input.justTouched())
        Gdx.input.setOnscreenKeyboardVisible(true);
}
