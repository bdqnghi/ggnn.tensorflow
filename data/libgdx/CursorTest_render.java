public void render() {
    // set the clear color and clear the screen.
    Gdx.gl.glClearColor(1, 1, 1, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    if (Gdx.input.isTouched()) {
        Gdx.graphics.setCursor(cursor1);
    } else {
        cursorActive = !cursorActive;
        if (cursorActive) {
            Gdx.graphics.setCursor(cursor2);
        } else {
            Gdx.graphics.setCursor(cursor3);
        }
    }
}
