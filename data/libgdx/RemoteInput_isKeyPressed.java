@Override
public boolean isKeyPressed(int key) {
    if (key == Input.Keys.ANY_KEY) {
        return keyCount > 0;
    }
    if (key < 0 || key > 255) {
        return false;
    }
    return keys[key];
}
