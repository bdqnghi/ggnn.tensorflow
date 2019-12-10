@Override
public void resize(int width, int height) {
    super.resize(width, height);
    ui.getViewport().setWorldSize(width, height);
    ui.getViewport().update(width, height, true);
}
