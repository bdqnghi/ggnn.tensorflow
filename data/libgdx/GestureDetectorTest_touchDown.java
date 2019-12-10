public boolean touchDown(float x, float y, int pointer, int button) {
    flinging = false;
    initialScale = camera.zoom;
    return false;
}
