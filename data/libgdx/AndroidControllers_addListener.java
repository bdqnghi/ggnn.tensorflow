@Override
public void addListener(ControllerListener listener) {
    synchronized (eventQueue) {
        listeners.add(listener);
    }
}
