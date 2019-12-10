@Override
public boolean keyUp(int keycode) {
    if (keycode == activateKey) {
        activatePressed = false;
        button = -1;
    }
    if (keycode == forwardKey)
        forwardPressed = false;
    else if (keycode == backwardKey)
        backwardPressed = false;
    else if (keycode == rotateRightKey)
        rotateRightPressed = false;
    else if (keycode == rotateLeftKey)
        rotateLeftPressed = false;
    return false;
}
