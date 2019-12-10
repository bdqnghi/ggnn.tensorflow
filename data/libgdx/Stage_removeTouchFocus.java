/**
 * Removes the listener from being notified for all touchDragged and touchUp events for the specified pointer and button. Note
 * the listener may never receive a touchUp event if this method is used.
 */
public void removeTouchFocus(EventListener listener, Actor listenerActor, Actor target, int pointer, int button) {
    SnapshotArray<TouchFocus> touchFocuses = this.touchFocuses;
    for (int i = touchFocuses.size - 1; i >= 0; i--) {
        TouchFocus focus = touchFocuses.get(i);
        if (focus.listener == listener && focus.listenerActor == listenerActor && focus.target == target && focus.pointer == pointer && focus.button == button) {
            touchFocuses.removeIndex(i);
            Pools.free(focus);
        }
    }
}
