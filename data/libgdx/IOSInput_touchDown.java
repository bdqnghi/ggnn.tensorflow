public void touchDown(long touches, UIEvent event) {
    toTouchEvents(touches, event);
    Gdx.graphics.requestRendering();
}
