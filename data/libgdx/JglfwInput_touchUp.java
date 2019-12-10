public boolean touchUp(int screenX, int screenY, int pointer, int button) {
    app.graphics.requestRendering();
    return processor != null ? processor.touchUp(screenX, screenY, pointer, button) : false;
}
