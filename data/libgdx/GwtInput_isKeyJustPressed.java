@Override
public boolean isKeyJustPressed(int key) {
    if (key == Keys.ANY_KEY) {
        return keyJustPressed;
    }
    if (key < 0 || key > 255) {
        return false;
    }
    return justPressedKeys[key];
}
