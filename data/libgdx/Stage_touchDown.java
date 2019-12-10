/**
 * Applies a touch down event to the stage and returns true if an actor in the scene {@link Event#handle() handled} the event.
 */
public boolean touchDown(int screenX, int screenY, int pointer, int button) {
    if (screenX < viewport.getScreenX() || screenX >= viewport.getScreenX() + viewport.getScreenWidth())
        return false;
    if (Gdx.graphics.getHeight() - screenY < viewport.getScreenY() || Gdx.graphics.getHeight() - screenY >= viewport.getScreenY() + viewport.getScreenHeight())
        return false;
    pointerTouched[pointer] = true;
    pointerScreenX[pointer] = screenX;
    pointerScreenY[pointer] = screenY;
    screenToStageCoordinates(tempCoords.set(screenX, screenY));
    InputEvent event = Pools.obtain(InputEvent.class);
    event.setType(Type.touchDown);
    event.setStage(this);
    event.setStageX(tempCoords.x);
    event.setStageY(tempCoords.y);
    event.setPointer(pointer);
    event.setButton(button);
    Actor target = hit(tempCoords.x, tempCoords.y, true);
    if (target == null) {
        if (root.getTouchable() == Touchable.enabled)
            root.fire(event);
    } else {
        target.fire(event);
    }
    boolean handled = event.isHandled();
    Pools.free(event);
    return handled;
}
