public void render() {
    int viewWidth = Gdx.graphics.getWidth();
    int viewHeight = Gdx.graphics.getHeight();
    float delta = Math.max(0, Gdx.graphics.getDeltaTime() * deltaMultiplier.getValue());
    float[] colors = backgroundColor.getColors();
    Gdx.gl.glClearColor(colors[0], colors[1], colors[2], 1.0f);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    if ((pixelsPerMeter.getValue() != pixelsPerMeterPrev) || (zoomLevel.getValue() != zoomLevelPrev)) {
        if (pixelsPerMeter.getValue() <= 0) {
            pixelsPerMeter.setValue(1);
        }
        worldCamera.setToOrtho(false, viewWidth / pixelsPerMeter.getValue(), viewHeight / pixelsPerMeter.getValue());
        worldCamera.zoom = zoomLevel.getValue();
        worldCamera.update();
        effect.setPosition(worldCamera.viewportWidth / 2, worldCamera.viewportHeight / 2);
        zoomLevelPrev = zoomLevel.getValue();
        pixelsPerMeterPrev = pixelsPerMeter.getValue();
    }
    spriteBatch.setProjectionMatrix(worldCamera.combined);
    spriteBatch.begin();
    spriteBatch.enableBlending();
    spriteBatch.setBlendFunction(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
    if (bgImage != null) {
        bgImage.setPosition(viewWidth / 2 - bgImage.getWidth() / 2, viewHeight / 2 - bgImage.getHeight() / 2);
        bgImage.draw(spriteBatch);
    }
    activeCount = 0;
    boolean complete = true;
    for (ParticleEmitter emitter : effect.getEmitters()) {
        if (emitter.getSprite() == null && emitter.getImagePath() != null)
            loadImage(emitter);
        boolean enabled = isEnabled(emitter);
        if (enabled) {
            if (emitter.getSprite() != null)
                emitter.draw(spriteBatch, delta);
            activeCount += emitter.getActiveCount();
            if (!emitter.isComplete())
                complete = false;
        }
    }
    if (complete)
        effect.start();
    maxActive = Math.max(maxActive, activeCount);
    maxActiveTimer += delta;
    if (maxActiveTimer > 3) {
        maxActiveTimer = 0;
        lastMaxActive = maxActive;
        maxActive = 0;
    }
    if (mouseDown) {
    // gl.drawLine(mouseX - 6, mouseY, mouseX + 5, mouseY);
    // gl.drawLine(mouseX, mouseY - 5, mouseX, mouseY + 6);
    }
    spriteBatch.setProjectionMatrix(textCamera.combined);
    font.draw(spriteBatch, "FPS: " + Gdx.graphics.getFramesPerSecond(), 5, 15);
    font.draw(spriteBatch, "Count: " + activeCount, 5, 35);
    font.draw(spriteBatch, "Max: " + lastMaxActive, 5, 55);
    font.draw(spriteBatch, (int) (getEmitter().getPercentComplete() * 100) + "%", 5, 75);
    spriteBatch.end();
// gl.drawLine((int)(viewWidth * getCurrentParticles().getPercentComplete()), viewHeight - 1, viewWidth, viewHeight -
// 1);
}
