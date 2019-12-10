@Override
public boolean touchUp(int screenX, int screenY, int pointer, int button) {
    touched &= -1 ^ (1 << pointer);
    multiTouch = !MathUtils.isPowerOfTwo(touched);
    if (button == this.button)
        this.button = -1;
    return super.touchUp(screenX, screenY, pointer, button) || activatePressed;
}
