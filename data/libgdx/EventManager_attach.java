public void attach(int aEventType, Listener aListener) {
    boolean isNew = false;
    Array<Listener> listeners = mListeners.get(aEventType);
    if (listeners == null) {
        listeners = new Array<EventManager.Listener>();
        mListeners.put(aEventType, listeners);
        isNew = true;
    }
    if (isNew || !listeners.contains(aListener, true)) {
        listeners.add(aListener);
    }
}
