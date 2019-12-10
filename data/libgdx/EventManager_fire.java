public void fire(int aEventType, Object aEventData) {
    Array<Listener> listeners = mListeners.get(aEventType);
    if (listeners != null)
        for (Listener listener : listeners) {
            listener.handle(aEventType, aEventData);
        }
}
