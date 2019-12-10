/**
 * Sends a touchUp event to all listeners that are registered to receive touchDragged and touchUp events and removes their
 * touch focus. This method removes all touch focus listeners, but sends a touchUp event so that the state of the listeners
 * remains consistent (listeners typically expect to receive touchUp eventually). The location of the touchUp is
 * {@link Integer#MIN_VALUE}. Listeners can use {@link InputEvent#isTouchFocusCancel()} to ignore this event if needed.
 */
public void cancelTouchFocus() {
    cancelTouchFocusExcept(null, null);
}
