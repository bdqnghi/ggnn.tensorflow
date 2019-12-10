@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    font.draw(batch, textBuffer, 0, Gdx.graphics.getHeight() - 20);
    batch.end();
    // bring up the keyboard if we touch the screen
    if (Gdx.input.justTouched()) {
        Gdx.input.setOnscreenKeyboardVisible(true);
        textBuffer = new SimpleCharSequence();
    }
}
