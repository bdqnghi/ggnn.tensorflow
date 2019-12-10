public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
    if (disabled)
        return false;
    if (draggingPointer != -1)
        return false;
    draggingPointer = pointer;
    calculatePositionAndValue(x, y);
    return true;
}
