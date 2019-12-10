@Override
public void addLifecycleListener(LifecycleListener listener) {
    synchronized (lifecycleListeners) {
        lifecycleListeners.add(listener);
    }
}
