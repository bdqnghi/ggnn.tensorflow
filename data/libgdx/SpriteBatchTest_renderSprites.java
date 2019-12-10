private void renderSprites() {
    Gdx.gl.glClearColor(0.7f, 0.7f, 0.7f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    float begin = 0;
    float end = 0;
    float draw1 = 0;
    float draw2 = 0;
    float drawText = 0;
    long start = TimeUtils.nanoTime();
    spriteBatch.begin();
    begin = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    float angleInc = ROTATION_SPEED * Gdx.graphics.getDeltaTime();
    scale += SCALE_SPEED * Gdx.graphics.getDeltaTime();
    if (scale < 0.5f) {
        scale = 0.5f;
        SCALE_SPEED = 1;
    }
    if (scale > 1.0f) {
        scale = 1.0f;
        SCALE_SPEED = -1;
    }
    start = TimeUtils.nanoTime();
    for (int i = 0; i < SPRITES; i++) {
        // this is aids
        if (angleInc != 0)
            sprites3[i].rotate(angleInc);
        // this is aids
        if (scale != 1)
            sprites3[i].setScale(scale);
        sprites3[i].draw(spriteBatch);
    }
    draw1 = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    start = TimeUtils.nanoTime();
    for (int i = SPRITES; i < SPRITES << 1; i++) {
        // this is aids
        if (angleInc != 0)
            sprites3[i].rotate(angleInc);
        // this is aids
        if (scale != 1)
            sprites3[i].setScale(scale);
        sprites3[i].draw(spriteBatch);
    }
    draw2 = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    start = TimeUtils.nanoTime();
    // spriteBatch.drawText(font, "Question?", 100, 300, Color.RED);
    // spriteBatch.drawText(font, "and another this is a test", 200, 100, Color.WHITE);
    // spriteBatch.drawText(font, "all hail and another this is a test", 200, 200, Color.WHITE);
    // spriteBatch.drawText(font, "Sprite fps: " + Gdx.graphics.getFramesPerSecond(), 10, 30, Color.RED);
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
