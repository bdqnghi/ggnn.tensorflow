@Override
public boolean keyUp(int keycode) {
    if (keycode == Keys.SPACE || keycode == Keys.MENU) {
        onLoaded();
    }
    return super.keyUp(keycode);
}
