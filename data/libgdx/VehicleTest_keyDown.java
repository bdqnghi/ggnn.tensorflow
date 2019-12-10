@Override
public boolean keyDown(int keycode) {
    switch(keycode) {
        case Keys.DOWN:
            downPressed = true;
            break;
        case Keys.UP:
            upPressed = true;
            break;
        case Keys.LEFT:
            leftPressed = true;
            break;
        case Keys.RIGHT:
            rightPressed = true;
            break;
    }
    return super.keyDown(keycode);
}
