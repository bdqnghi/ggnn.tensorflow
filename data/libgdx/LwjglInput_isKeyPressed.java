public boolean isKeyPressed(int key) {
    if (!Keyboard.isCreated())
        return false;
    if (key == Input.Keys.ANY_KEY)
        return pressedKeys > 0;
    else
        return Keyboard.isKeyDown(getLwjglKeyCode(key));
}
