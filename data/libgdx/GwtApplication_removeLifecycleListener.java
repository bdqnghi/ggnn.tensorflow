@Override
public void removeLifecycleListener(LifecycleListener listener) {
    synchronized (lifecycleListeners) {
        lifecycleListeners.removeValue(listener, true);
    }
}
