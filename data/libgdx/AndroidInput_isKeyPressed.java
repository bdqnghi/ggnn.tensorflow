@Override
public synchronized boolean isKeyPressed(int key) {
    if (key == Input.Keys.ANY_KEY) {
        return keyCount > 0;
    }
    if (key < 0 || key >= SUPPORTED_KEYS) {
        return false;
    }
    return keys[key];
}
