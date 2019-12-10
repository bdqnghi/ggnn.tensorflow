/**
 * Applies a touch up event to the stage and returns true if an actor in the scene {@link Event#handle() handled} the event.
 * Only {@link InputListener listeners} that returned true for touchDown will receive this event.
 */
public boolean touchUp(int screenX, int screenY, int pointer, int button) {
    pointerTouched[pointer] = false;
    pointerScreenX[pointer] = screenX;
    pointerScreenY[pointer] = screenY;
    if (touchFocuses.size == 0)
        return false;
    screenToStageCoordinates(tempCoords.set(screenX, screenY));
    InputEvent event = Pools.obtain(InputEvent.class);
    event.setType(Type.touchUp);
    event.setStage(this);
    event.setStageX(tempCoords.x);
    event.setStageY(tempCoords.y);
    event.setPointer(pointer);
    event.setButton(button);
    SnapshotArray<TouchFocus> touchFocuses = this.touchFocuses;
    TouchFocus[] focuses = touchFocuses.begin();
    for (int i = 0, n = touchFocuses.size; i < n; i++) {
        TouchFocus focus = focuses[i];
        if (focus.pointer != pointer || focus.button != button)
            continue;
        // Touch focus already gone.
        if (!touchFocuses.removeValue(focus, true))
            continue;
        event.setTarget(focus.target);
        event.setListenerActor(focus.listenerActor);
        if (focus.listener.handle(event))
            event.handle();
        Pools.free(focus);
    }
    touchFocuses.end();
    boolean handled = event.isHandled();
    Pools.free(event);
    return handled;
}
