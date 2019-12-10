@Override
public void resize(int width, int height) {
    ui.setSize(width, height);
    ui.invalidate();
    stage.getViewport().update(width, height, true);
}
