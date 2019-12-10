public void touchMoved(long touches, UIEvent event) {
    toTouchEvents(touches, event);
    Gdx.graphics.requestRendering();
}
