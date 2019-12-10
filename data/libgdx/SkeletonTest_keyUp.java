@Override
public boolean keyUp(int keycode) {
    if (keycode == Keys.SPACE || keycode == Keys.MENU)
        switchAnimation();
    return super.keyUp(keycode);
}
