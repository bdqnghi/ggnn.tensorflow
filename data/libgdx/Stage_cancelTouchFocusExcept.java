/**
 * Cancels touch focus for all listeners except the specified listener.
 * @see #cancelTouchFocus()
 */
public void cancelTouchFocusExcept(EventListener exceptListener, Actor exceptActor) {
    InputEvent event = Pools.obtain(InputEvent.class);
    event.setStage(this);
    event.setType(InputEvent.Type.touchUp);
    event.setStageX(Integer.MIN_VALUE);
    event.setStageY(Integer.MIN_VALUE);
    // Cancel all current touch focuses except for the specified listener, allowing for concurrent modification, and never
    // cancel the same focus twice.
    SnapshotArray<TouchFocus> touchFocuses = this.touchFocuses;
    TouchFocus[] items = touchFocuses.begin();
    for (int i = 0, n = touchFocuses.size; i < n; i++) {
        TouchFocus focus = items[i];
        if (focus.listener == exceptListener && focus.listenerActor == exceptActor)
            continue;
        // Touch focus already gone.
        if (!touchFocuses.removeValue(focus, true))
            continue;
        event.setTarget(focus.target);
        event.setListenerActor(focus.listenerActor);
        event.setPointer(focus.pointer);
        event.setButton(focus.button);
        focus.listener.handle(event);
    // Cannot return TouchFocus to pool, as it may still be in use (eg if cancelTouchFocus is called from touchDragged).
    }
    touchFocuses.end();
    Pools.free(event);
}
