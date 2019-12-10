public void render() {
    Gdx.gl.glClearColor(0.5f, 0.5f, 0.5f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    stage.act(Gdx.graphics.getDeltaTime());
    stage.draw();
    long now = TimeUtils.nanoTime();
    sampleFrames++;
    if (now - sampleStartTime > 1000000000) {
        if (sampleStartTime != 0) {
            int renderCalls = ((SpriteBatch) stage.getBatch()).renderCalls;
            Gdx.app.log("CpuSpriteBatch", "FPS: " + sampleFrames + ", render calls: " + renderCalls);
        }
        sampleStartTime = now;
        sampleFrames = 0;
    }
}
