@Override
public boolean touchDragged(int screenX, int screenY, int pointer) {
    touch(screenX, screenY);
    return super.touchDragged(screenX, screenY, pointer);
}
