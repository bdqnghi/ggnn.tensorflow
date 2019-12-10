@Override
public void resize(int width, int height) {
    super.resize(width, height);
    hud.getViewport().update(width, height, true);
    hudWidth = hud.getWidth();
    hudHeight = hud.getHeight();
}
