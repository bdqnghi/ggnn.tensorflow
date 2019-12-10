public void resume() {
    if (!appPaused)
        return;
    appPaused = false;
    Array<LifecycleListener> listeners = app.lifecycleListeners;
    synchronized (listeners) {
        for (LifecycleListener listener : listeners) {
            listener.resume();
        }
    }
    app.listener.resume();
}
