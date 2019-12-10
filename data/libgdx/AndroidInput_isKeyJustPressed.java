@Override
public synchronized boolean isKeyJustPressed(int key) {
    if (key == Input.Keys.ANY_KEY) {
        return keyJustPressed;
    }
    if (key < 0 || key >= SUPPORTED_KEYS) {
        return false;
    }
    return justPressedKeys[key];
}
