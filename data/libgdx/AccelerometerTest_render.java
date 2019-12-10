@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    font.draw(batch, "accel: [" + Gdx.input.getAccelerometerX() + "," + Gdx.input.getAccelerometerY() + "," + Gdx.input.getAccelerometerZ() + "]\n" + "orientation: " + Gdx.input.getNativeOrientation() + "\n" + "rotation: " + Gdx.input.getRotation() + "\n" + "wh: " + Gdx.graphics.getDesktopDisplayMode() + "\n", 0, 100);
    batch.end();
}
