/**
 * Called when a mouse button or a finger touch goes down on the actor. If true is returned, this listener will receive all
 * touchDragged and touchUp events, even those not over this actor, until touchUp is received. Also when true is returned, the
 * event is {@link Event#handle() handled}.
 * @see InputEvent
 */
public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
    return false;
}
