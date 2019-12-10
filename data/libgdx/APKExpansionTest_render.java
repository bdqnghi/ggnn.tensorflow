@Override
public void render() {
    Gdx.gl.glClearColor(1, 0, 0, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    batch.draw(texture, 0, 0);
    batch.draw(atlasTextureRegion, 0, 0);
    batch.end();
}
