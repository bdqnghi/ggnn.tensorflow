final void willTerminate(UIApplication uiApp) {
    Gdx.app.debug("IOSApplication", "disposed");
    graphics.makeCurrent();
    Array<LifecycleListener> listeners = lifecycleListeners;
    synchronized (listeners) {
        for (LifecycleListener listener : listeners) {
            listener.pause();
        }
    }
    listener.dispose();
    Gdx.gl.glFlush();
}
