public boolean keyDown(int keycode) {
    pressedKeys++;
    keyJustPressed = true;
    justPressedKeys[keycode] = true;
    app.graphics.requestRendering();
    return processor != null ? processor.keyDown(keycode) : false;
}
