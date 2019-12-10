/**
 * Add a listener to receive events that {@link #hit(float, float, boolean) hit} this actor. See {@link #fire(Event)}.
 * @see InputListener
 * @see ClickListener
 */
public boolean addListener(EventListener listener) {
    if (!listeners.contains(listener, true)) {
        listeners.add(listener);
        return true;
    }
    return false;
}
