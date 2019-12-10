@Override
public boolean keyDown(int keycode) {
    if (keycode == activateKey)
        activatePressed = true;
    if (keycode == forwardKey)
        forwardPressed = true;
    else if (keycode == backwardKey)
        backwardPressed = true;
    else if (keycode == rotateRightKey)
        rotateRightPressed = true;
    else if (keycode == rotateLeftKey)
        rotateLeftPressed = true;
    return false;
}
