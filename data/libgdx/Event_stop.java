/**
 * Marks this event has being stopped. This halts event propagation. Any other listeners on the {@link #getListenerActor()
 * listener actor} are notified, but after that no other listeners are notified.
 */
public void stop() {
    stopped = true;
}
