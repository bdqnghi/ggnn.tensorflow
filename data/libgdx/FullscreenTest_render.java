@Override
public void render() {
    Gdx.gl.glClearColor(0, 0, 0, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    batch.draw(tex, Gdx.input.getX(), Gdx.graphics.getHeight() - Gdx.input.getY());
    font.draw(batch, "" + Gdx.graphics.getWidth() + ", " + Gdx.graphics.getHeight(), 0, 20);
    batch.end();
    if (Gdx.input.justTouched()) {
        if (fullscreen) {
            Gdx.graphics.setDisplayMode(480, 320, false);
            batch.getProjectionMatrix().setToOrtho2D(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
            Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
            fullscreen = false;
        } else {
            DisplayMode m = null;
            for (DisplayMode mode : Gdx.graphics.getDisplayModes()) {
                if (m == null) {
                    m = mode;
                } else {
                    if (m.width < mode.width) {
                        m = mode;
                    }
                }
            }
            Gdx.graphics.setDisplayMode(m);
            batch.getProjectionMatrix().setToOrtho2D(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
            Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
            fullscreen = true;
        }
    }
}
