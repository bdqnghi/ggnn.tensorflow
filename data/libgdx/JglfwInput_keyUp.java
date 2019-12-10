public boolean keyUp(int keycode) {
    pressedKeys--;
    app.graphics.requestRendering();
    return processor != null ? processor.keyUp(keycode) : false;
}
