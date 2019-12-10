public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
    // we only care for the first finger to make things easier
    if (pointer != 0)
        return false;
    // record the coordinates the finger went down on. they
    // are given relative to the actor's upper left corner (0, 0)
    lastX = x;
    lastY = y;
    return true;
}
