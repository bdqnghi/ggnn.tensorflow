/**
 * Notifies this actor's listeners of the event. The event is not propagated to any parents. Before notifying the listeners,
 * this actor is set as the {@link Event#getListenerActor() listener actor}. The event {@link Event#setTarget(Actor) target}
 * must be set before calling this method. If this actor is not in the stage, the stage must be set before calling this method.
 * @param capture If true, the capture listeners will be notified instead of the regular listeners.
 * @return true of the event was {@link Event#cancel() cancelled}.
 */
public boolean notify(Event event, boolean capture) {
    if (event.getTarget() == null)
        throw new IllegalArgumentException("The event target cannot be null.");
    DelayedRemovalArray<EventListener> listeners = capture ? captureListeners : this.listeners;
    if (listeners.size == 0)
        return event.isCancelled();
    event.setListenerActor(this);
    event.setCapture(capture);
    if (event.getStage() == null)
        event.setStage(stage);
    listeners.begin();
    for (int i = 0, n = listeners.size; i < n; i++) {
        EventListener listener = listeners.get(i);
        if (listener.handle(event)) {
            event.handle();
            if (event instanceof InputEvent) {
                InputEvent inputEvent = (InputEvent) event;
                if (inputEvent.getType() == Type.touchDown) {
                    event.getStage().addTouchFocus(listener, this, inputEvent.getTarget(), inputEvent.getPointer(), inputEvent.getButton());
                }
            }
        }
    }
    listeners.end();
    return event.isCancelled();
}
