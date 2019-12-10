public void detach(int aEventType, Listener aListener) {
    Array<Listener> listeners = mListeners.get(aEventType);
    if (listeners != null) {
        listeners.removeValue(aListener, true);
        if (listeners.size == 0)
            mListeners.remove(aEventType);
    }
}
