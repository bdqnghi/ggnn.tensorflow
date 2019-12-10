/**
 * Removes the touch, keyboard, and scroll focus for the specified actor and any descendants.
 */
public void unfocus(Actor actor) {
    cancelTouchFocus(actor);
    if (scrollFocus != null && scrollFocus.isDescendantOf(actor))
        scrollFocus = null;
    if (keyboardFocus != null && keyboardFocus.isDescendantOf(actor))
        keyboardFocus = null;
}
