private void onVisibilityChange(boolean visible) {
    if (visible) {
        for (LifecycleListener listener : lifecycleListeners) {
            listener.resume();
        }
        listener.resume();
    } else {
        for (LifecycleListener listener : lifecycleListeners) {
            listener.pause();
        }
        listener.pause();
    }
}
