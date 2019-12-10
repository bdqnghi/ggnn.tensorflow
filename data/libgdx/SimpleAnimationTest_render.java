@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    currentFrameTime += Gdx.graphics.getDeltaTime();
    spriteBatch.begin();
    TextureRegion frame = currentWalk.getKeyFrame(currentFrameTime, true);
    spriteBatch.draw(frame, position.x, position.y);
    spriteBatch.end();
}
