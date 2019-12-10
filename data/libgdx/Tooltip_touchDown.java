public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
    if (instant) {
        container.toFront();
        return false;
    }
    manager.touchDown(this);
    return false;
}
