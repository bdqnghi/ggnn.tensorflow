public boolean removeListener(EventListener listener) {
    return listeners.removeValue(listener, true);
}
