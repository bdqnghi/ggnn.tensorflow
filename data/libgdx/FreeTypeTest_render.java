@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    font.setColor(Color.RED);
    font.draw(batch, "This is a test\nAnd another line\n()����$%&/!12390#", 100, 112);
    ftFont.draw(batch, "This is a test\nAnd another line\n()����$%&/!12390#", 100, 112);
    // batch.disableBlending();
    batch.draw(ftFont.getRegion(), 300, 0);
    // batch.enableBlending();
    batch.end();
}
