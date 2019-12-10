private void renderNormal() {
    Gdx.gl.glClearColor(0.7f, 0.7f, 0.7f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    float begin = 0;
    float end = 0;
    float draw1 = 0;
    float draw2 = 0;
    float drawText = 0;
    angle += ROTATION_SPEED * Gdx.graphics.getDeltaTime();
    scale += SCALE_SPEED * Gdx.graphics.getDeltaTime();
    if (scale < 0.5f) {
        scale = 0.5f;
        SCALE_SPEED = 1;
    }
    if (scale > 1.0f) {
        scale = 1.0f;
        SCALE_SPEED = -1;
    }
    long start = TimeUtils.nanoTime();
    spriteBatch.begin();
    begin = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    start = TimeUtils.nanoTime();
    for (int i = 0; i < sprites.length; i += 6) spriteBatch.draw(texture, sprites[i], sprites[i + 1], 16, 16, 32, 32, scale, scale, angle, 0, 0, 32, 32, false, false);
    draw1 = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    start = TimeUtils.nanoTime();
    for (int i = 0; i < sprites2.length; i += 6) spriteBatch.draw(texture2, sprites2[i], sprites2[i + 1], 16, 16, 32, 32, scale, scale, angle, 0, 0, 32, 32, false, false);
    draw2 = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    start = TimeUtils.nanoTime();
    // spriteBatch.drawText(font, "Question?", 100, 300, Color.RED);
    // spriteBatch.drawText(font, "and another this is a test", 200, 100, Color.WHITE);
    // spriteBatch.drawText(font, "all hail and another this is a test", 200, 200, Color.WHITE);
    // spriteBatch.drawText(font, "normal fps: " + Gdx.graphics.getFramesPerSecond(), 10, 30, Color.RED);
    drawText = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    start = TimeUtils.nanoTime();
    spriteBatch.end();
    end = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    if (TimeUtils.nanoTime() - startTime > 1000000000) {
        Gdx.app.log("SpriteBatch", "fps: " + frames + ", render calls: " + spriteBatch.renderCalls + ", " + begin + ", " + draw1 + ", " + draw2 + ", " + drawText + ", " + end);
        frames = 0;
        startTime = TimeUtils.nanoTime();
    }
    frames++;
}
