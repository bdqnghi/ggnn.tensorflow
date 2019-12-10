/**
 * Adds a listener that is only notified during the capture phase.
 * @see #fire(Event)
 */
public boolean addCaptureListener(EventListener listener) {
    if (!captureListeners.contains(listener, true))
        captureListeners.add(listener);
    return true;
}
