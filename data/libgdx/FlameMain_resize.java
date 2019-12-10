@Override
public void resize(int width, int height) {
    Gdx.input.setInputProcessor(new InputMultiplexer(ui, cameraInputController));
    Gdx.gl.glViewport(0, 0, width, height);
    worldCamera.viewportWidth = width;
    worldCamera.viewportHeight = height;
    worldCamera.update();
    ui.getViewport().setWorldSize(width, height);
    ui.getViewport().update(width, height, true);
}
