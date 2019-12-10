@Override
public boolean keyUp(int keycode) {
    if (keycode == Keys.LEFT)
        leftKey = false;
    if (keycode == Keys.RIGHT)
        rightKey = false;
    if (keycode == Keys.UP)
        upKey = false;
    if (keycode == Keys.DOWN)
        downKey = false;
    if (keycode == Keys.SPACE)
        spaceKey = false;
    return super.keyUp(keycode);
}
