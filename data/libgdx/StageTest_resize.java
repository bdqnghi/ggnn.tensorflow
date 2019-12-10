public void resize(int width, int height) {
    ui.getViewport().update(width, height, true);
    stage.getViewport().update(width, height, true);
}
