public boolean keyTyped(char character) {
    app.graphics.requestRendering();
    return processor != null ? processor.keyTyped(character) : false;
}
