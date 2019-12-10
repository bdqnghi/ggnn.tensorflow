/**
 * When true (default) and flick scrolling begins, {@link #cancelTouchFocus()} is called. This causes any widgets inside the
 * scrollpane that have received touchDown to receive touchUp when flick scrolling begins.
 */
public void setCancelTouchFocus(boolean cancelTouchFocus) {
    this.cancelTouchFocus = cancelTouchFocus;
}
