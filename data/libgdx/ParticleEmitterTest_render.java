public void render() {
    spriteBatch.getProjectionMatrix().setToOrtho2D(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    float delta = Gdx.graphics.getDeltaTime();
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    spriteBatch.begin();
    effect.draw(spriteBatch, delta);
    spriteBatch.end();
    fpsCounter += delta;
    if (fpsCounter > 3) {
        fpsCounter = 0;
        int activeCount = emitters.get(emitterIndex).getActiveCount();
        Gdx.app.log("libgdx", activeCount + "/" + particleCount + " particles, FPS: " + Gdx.graphics.getFramesPerSecond());
    }
}
