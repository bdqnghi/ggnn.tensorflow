@Override
public boolean keyUp(int keycode) {
    boolean result = tests[testIndex].keyUp(keycode);
    if ((result == false) && (keycode == Keys.SPACE || keycode == Keys.MENU)) {
        next();
        result = true;
    }
    return result;
}
