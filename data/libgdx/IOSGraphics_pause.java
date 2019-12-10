public void pause() {
    if (appPaused)
        return;
    appPaused = true;
    Array<LifecycleListener> listeners = app.lifecycleListeners;
    synchronized (listeners) {
        for (LifecycleListener listener : listeners) {
            listener.pause();
        }
    }
    app.listener.pause();
}
