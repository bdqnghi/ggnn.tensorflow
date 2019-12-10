public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.setProjectionMatrix(sceneMatrix);
    batch.begin();
    renderSprite();
    batch.end();
    batch.setProjectionMatrix(textMatrix);
    batch.begin();
    font.draw(batch, modeString + " fps:" + Gdx.graphics.getFramesPerSecond(), 26, 65);
    batch.end();
}
