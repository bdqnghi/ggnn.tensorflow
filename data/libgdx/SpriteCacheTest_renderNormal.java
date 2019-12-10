private void renderNormal() {
    Gdx.gl.glClearColor(0.7f, 0.7f, 0.7f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    float begin = 0;
    float end = 0;
    float draw1 = 0;
    long start = TimeUtils.nanoTime();
    spriteCache.begin();
    begin = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    start = TimeUtils.nanoTime();
    spriteCache.draw(normalCacheID);
    draw1 = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    start = TimeUtils.nanoTime();
    spriteCache.end();
    end = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    if (TimeUtils.nanoTime() - startTime > 1000000000) {
        // Gdx.app.log( "SpriteBatch", "fps: " + frames + ", render calls: " + spriteBatch.renderCalls + ", " + begin + ", " + draw1 +
        // ", " + draw2 + ", " + drawText + ", " + end );
        frames = 0;
        startTime = TimeUtils.nanoTime();
    }
    frames++;
}
