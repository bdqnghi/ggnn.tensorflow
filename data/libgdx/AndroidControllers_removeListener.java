@Override
public void removeListener(ControllerListener listener) {
    synchronized (eventQueue) {
        listeners.removeValue(listener, true);
    }
}
