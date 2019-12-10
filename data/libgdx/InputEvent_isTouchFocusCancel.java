/**
 * Returns true of this event is a touchUp triggered by {@link Stage#cancelTouchFocus()}.
 */
public boolean isTouchFocusCancel() {
    return stageX == Integer.MIN_VALUE || stageY == Integer.MIN_VALUE;
}
