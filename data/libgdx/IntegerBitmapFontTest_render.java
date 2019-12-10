public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    font.setUseIntegerPositions(false);
    font.setColor(1, 0, 0, 1);
    singleLineCacheNonInteger.draw(batch);
    multiLineCacheNonInteger.draw(batch);
    drawTexts();
    font.setUseIntegerPositions(true);
    font.setColor(1, 1, 1, 1);
    singleLineCache.draw(batch);
    multiLineCache.draw(batch);
    drawTexts();
    batch.end();
}
