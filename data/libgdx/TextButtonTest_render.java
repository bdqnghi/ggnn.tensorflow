@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    stage.draw();
    Gdx.app.log("X", "FPS: " + Gdx.graphics.getFramesPerSecond());
    SpriteBatch spriteBatch = (SpriteBatch) stage.getBatch();
    Gdx.app.log("X", "render calls: " + spriteBatch.totalRenderCalls);
    spriteBatch.totalRenderCalls = 0;
}
