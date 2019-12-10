public boolean touchDragged(float x, float y, int pointer) {
    if (pointer > 1)
        return false;
    if (longPressFired)
        return false;
    if (pointer == 0)
        pointer1.set(x, y);
    else
        pointer2.set(x, y);
    // handle pinch zoom
    if (pinching) {
        if (listener != null) {
            boolean result = listener.pinch(initialPointer1, initialPointer2, pointer1, pointer2);
            return listener.zoom(initialPointer1.dst(initialPointer2), pointer1.dst(pointer2)) || result;
        }
        return false;
    }
    // update tracker
    tracker.update(x, y, Gdx.input.getCurrentEventTime());
    // check if we are still tapping.
    if (inTapSquare && !isWithinTapSquare(x, y, tapSquareCenterX, tapSquareCenterY)) {
        longPressTask.cancel();
        inTapSquare = false;
    }
    // if we have left the tap square, we are panning
    if (!inTapSquare) {
        panning = true;
        return listener.pan(x, y, tracker.deltaX, tracker.deltaY);
    }
    return false;
}
