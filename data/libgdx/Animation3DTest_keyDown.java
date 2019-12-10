@Override
public boolean keyDown(int keycode) {
    if (keycode == Keys.LEFT)
        leftKey = true;
    if (keycode == Keys.RIGHT)
        rightKey = true;
    if (keycode == Keys.UP)
        upKey = true;
    if (keycode == Keys.DOWN)
        downKey = true;
    if (keycode == Keys.SPACE)
        spaceKey = true;
    return super.keyDown(keycode);
}
