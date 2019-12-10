public boolean scrolled(int amount) {
    app.graphics.requestRendering();
    return processor != null ? processor.scrolled(amount) : false;
}
