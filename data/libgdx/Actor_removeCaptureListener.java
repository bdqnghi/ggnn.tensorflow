public boolean removeCaptureListener(EventListener listener) {
    return captureListeners.removeValue(listener, true);
}
