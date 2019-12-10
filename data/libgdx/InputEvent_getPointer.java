/**
 * The pointer index for the event. The first touch is index 0, second touch is index 1, etc. Always -1 on desktop. Valid for:
 * touchDown, touchDragged, touchUp, enter, and exit.
 */
public int getPointer() {
    return pointer;
}
