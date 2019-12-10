@Override
public void setCursorPosition(int x, int y) {
    Mouse.setCursorPosition(x, Gdx.graphics.getHeight() - 1 - y);
}
