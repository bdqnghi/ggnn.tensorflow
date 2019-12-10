@Override
public boolean touchUp(int screenX, int screenY, int pointer, int button) {
    touch(screenX, screenY);
    return super.touchUp(screenX, screenY, pointer, button);
}
