/**
 * Adds the listener to be notified for all touchDragged and touchUp events for the specified pointer and button. The actor
 * will be used as the {@link Event#getListenerActor() listener actor} and {@link Event#getTarget() target}.
 */
public void addTouchFocus(EventListener listener, Actor listenerActor, Actor target, int pointer, int button) {
    TouchFocus focus = Pools.obtain(TouchFocus.class);
    focus.listenerActor = listenerActor;
    focus.target = target;
    focus.listener = listener;
    focus.pointer = pointer;
    focus.button = button;
    touchFocuses.add(focus);
}
