/**
 * Applies a mouse scroll event to the stage and returns true if an actor in the scene {@link Event#handle() handled} the
 * event. This event only occurs on the desktop.
 */
public boolean scrolled(int amount) {
    Actor target = scrollFocus == null ? root : scrollFocus;
    screenToStageCoordinates(tempCoords.set(mouseScreenX, mouseScreenY));
    InputEvent event = Pools.obtain(InputEvent.class);
    event.setStage(this);
    event.setType(InputEvent.Type.scrolled);
    event.setScrollAmount(amount);
    event.setStageX(tempCoords.x);
    event.setStageY(tempCoords.y);
    target.fire(event);
    boolean handled = event.isHandled();
    Pools.free(event);
    return handled;
}
