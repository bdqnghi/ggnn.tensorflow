/**
 * Sets the actor that will receive key events.
 * @param actor May be null.
 */
public void setKeyboardFocus(Actor actor) {
    if (keyboardFocus == actor)
        return;
    FocusEvent event = Pools.obtain(FocusEvent.class);
    event.setStage(this);
    event.setType(FocusEvent.Type.keyboard);
    Actor oldKeyboardFocus = keyboardFocus;
    if (oldKeyboardFocus != null) {
        event.setFocused(false);
        event.setRelatedActor(actor);
        oldKeyboardFocus.fire(event);
    }
    if (!event.isCancelled()) {
        keyboardFocus = actor;
        if (actor != null) {
            event.setFocused(true);
            event.setRelatedActor(oldKeyboardFocus);
            actor.fire(event);
            if (event.isCancelled())
                setKeyboardFocus(oldKeyboardFocus);
        }
    }
    Pools.free(event);
}
