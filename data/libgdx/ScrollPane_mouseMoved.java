public boolean mouseMoved(InputEvent event, float x, float y) {
    if (!flickScroll)
        resetFade();
    return false;
}
