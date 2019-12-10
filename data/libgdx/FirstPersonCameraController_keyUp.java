@Override
public boolean keyUp(int keycode) {
    keys.remove(keycode, 0);
    return true;
}
