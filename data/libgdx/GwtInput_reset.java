void reset() {
    justTouched = false;
    if (keyJustPressed) {
        keyJustPressed = false;
        for (int i = 0; i < justPressedKeys.length; i++) {
            justPressedKeys[i] = false;
        }
    }
}
