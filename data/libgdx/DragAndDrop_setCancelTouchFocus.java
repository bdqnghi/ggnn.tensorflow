/**
 * When true (default), the {@link Stage#cancelTouchFocus()} touch focus} is cancelled if
 * {@link Source#dragStart(InputEvent, float, float, int) dragStart} returns non-null. This ensures the DragAndDrop is the only
 * touch focus listener, eg when the source is inside a {@link ScrollPane} with flick scroll enabled.
 */
public void setCancelTouchFocus(boolean cancelTouchFocus) {
    this.cancelTouchFocus = cancelTouchFocus;
}
