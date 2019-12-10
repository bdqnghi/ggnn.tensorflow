@Override
public boolean keyUp(int keycode) {
    if (keycode == Keys.ENTER) {
        toggleDebugMode();
        return true;
    }
    return super.keyUp(keycode);
}
