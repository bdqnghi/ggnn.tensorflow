public void touchUp(long touches, UIEvent event) {
    toTouchEvents(touches, event);
    Gdx.graphics.requestRendering();
}