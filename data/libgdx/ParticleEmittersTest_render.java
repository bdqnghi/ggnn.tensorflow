public void render() {
    ui.act();
    spriteBatch.getProjectionMatrix().setToOrtho2D(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    float delta = Gdx.graphics.getDeltaTime();
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    spriteBatch.begin();
    for (ParticleEffect e : effects) e.draw(spriteBatch, delta);
    spriteBatch.end();
    fpsCounter += delta;
    if (fpsCounter > 3) {
        fpsCounter = 0;
        String log = effects.size + " particle effects, FPS: " + Gdx.graphics.getFramesPerSecond() + ", Render calls: " + spriteBatch.renderCalls;
        Gdx.app.log("libgdx", log);
        logLabel.setText(log);
    }
    ui.draw();
}
