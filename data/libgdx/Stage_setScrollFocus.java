/**
 * Sets the actor that will receive scroll events.
 * @param actor May be null.
 */
public void setScrollFocus(Actor actor) {
    if (scrollFocus == actor)
        return;
    FocusEvent event = Pools.obtain(FocusEvent.class);
    event.setStage(this);
    event.setType(FocusEvent.Type.scroll);
    Actor oldScrollFocus = scrollFocus;
    if (oldScrollFocus != null) {
        event.setFocused(false);
        event.setRelatedActor(actor);
        oldScrollFocus.fire(event);
    }
    if (!event.isCancelled()) {
        scrollFocus = actor;
        if (actor != null) {
            event.setFocused(true);
            event.setRelatedActor(oldScrollFocus);
            actor.fire(event);
            if (event.isCancelled())
                setScrollFocus(oldScrollFocus);
        }
    }
    Pools.free(event);
}
