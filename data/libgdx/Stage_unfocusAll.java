/**
 * Removes the touch, keyboard, and scroll focused actors.
 */
public void unfocusAll() {
    scrollFocus = null;
    keyboardFocus = null;
    cancelTouchFocus();
}
