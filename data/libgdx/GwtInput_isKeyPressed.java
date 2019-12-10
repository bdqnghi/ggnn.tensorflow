@Override
public boolean isKeyPressed(int key) {
    if (key == Keys.ANY_KEY) {
        return pressedKeyCount > 0;
    }
    if (key < 0 || key > 255) {
        return false;
    }
    return pressedKeys[key];
}
