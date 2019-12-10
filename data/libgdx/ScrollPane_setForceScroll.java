/**
 * Forces enabling scrollbars (for non-flick scroll) and overscrolling (for flick scroll) in a direction, even if the contents
 * do not exceed the bounds in that direction.
 */
public void setForceScroll(boolean x, boolean y) {
    forceScrollX = x;
    forceScrollY = y;
}
