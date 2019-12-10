@Override
public boolean touchDown(int screenX, int screenY, int pointer, int button) {
    touched |= (1 << pointer);
    multiTouch = !MathUtils.isPowerOfTwo(touched);
    if (multiTouch)
        this.button = -1;
    else if (this.button < 0 && (activateKey == 0 || activatePressed)) {
        startX = screenX;
        startY = screenY;
        this.button = button;
    }
    return super.touchDown(screenX, screenY, pointer, button) || (activateKey == 0 || activatePressed);
}
