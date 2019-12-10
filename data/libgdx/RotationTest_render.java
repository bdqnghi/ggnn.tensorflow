@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    batch.draw(texture, 0, 0);
    batch.draw(region, 128, 0, 64, 64, 128, 128, 1, 1, 90);
    batch.draw(region, 128, 128, 64, 64, 128, 128, 1, 1, 180);
    batch.draw(region, 0, 128, 64, 64, 128, 128, 1, 1, 270);
    batch.end();
}
