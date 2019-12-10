/**
 * Applies a mouse moved event to the stage and returns true if an actor in the scene {@link Event#handle() handled} the event.
 * This event only occurs on the desktop.
 */
public boolean mouseMoved(int screenX, int screenY) {
    if (screenX < viewport.getScreenX() || screenX >= viewport.getScreenX() + viewport.getScreenWidth())
        return false;
    if (Gdx.graphics.getHeight() - screenY < viewport.getScreenY() || Gdx.graphics.getHeight() - screenY >= viewport.getScreenY() + viewport.getScreenHeight())
        return false;
    mouseScreenX = screenX;
    mouseScreenY = screenY;
    screenToStageCoordinates(tempCoords.set(screenX, screenY));
    InputEvent event = Pools.obtain(InputEvent.class);
    event.setStage(this);
    event.setType(Type.mouseMoved);
    event.setStageX(tempCoords.x);
    event.setStageY(tempCoords.y);
    Actor target = hit(tempCoords.x, tempCoords.y, true);
    if (target == null)
        target = root;
    target.fire(event);
    boolean handled = event.isHandled();
    Pools.free(event);
    return handled;
}
