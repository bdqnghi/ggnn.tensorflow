@Override
public void resize(int width, int height) {
    Gdx.gl.glViewport(0, 0, width, height);
    if (pixelsPerMeter.getValue() <= 0) {
        pixelsPerMeter.setValue(1);
    }
    worldCamera.setToOrtho(false, width / pixelsPerMeter.getValue(), height / pixelsPerMeter.getValue());
    worldCamera.update();
    textCamera.setToOrtho(true, width, height);
    textCamera.update();
    effect.setPosition(worldCamera.viewportWidth / 2, worldCamera.viewportHeight / 2);
}
