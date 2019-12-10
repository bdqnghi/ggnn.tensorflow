public boolean touchDown(int screenX, int screenY, int pointer, int button) {
    justTouched = true;
    app.graphics.requestRendering();
    return processor != null ? processor.touchDown(screenX, screenY, pointer, button) : false;
}
