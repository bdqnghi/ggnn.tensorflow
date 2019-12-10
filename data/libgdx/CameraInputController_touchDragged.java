@Override
public boolean touchDragged(int screenX, int screenY, int pointer) {
    boolean result = super.touchDragged(screenX, screenY, pointer);
    if (result || this.button < 0)
        return result;
    final float deltaX = (screenX - startX) / Gdx.graphics.getWidth();
    final float deltaY = (startY - screenY) / Gdx.graphics.getHeight();
    startX = screenX;
    startY = screenY;
    return process(deltaX, deltaY, button);
}
