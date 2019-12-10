public void stop() {
    if (!running)
        return;
    running = false;
    setGlobals();
    Array<LifecycleListener> listeners = lifecycleListeners;
    // To allow destroying of OpenGL textures during disposal.
    if (canvas.isDisplayable()) {
        makeCurrent();
    } else {
        error(logTag, "OpenGL context destroyed before application listener has had a chance to dispose of textures.");
    }
    synchronized (listeners) {
        for (LifecycleListener listener : listeners) {
            listener.pause();
            listener.dispose();
        }
    }
    listener.pause();
    listener.dispose();
    Gdx.app = null;
    Gdx.graphics = null;
    if (audio != null) {
        audio.dispose();
        Gdx.audio = null;
    }
    if (files != null)
        Gdx.files = null;
    if (net != null)
        Gdx.net = null;
    instanceCount--;
    stopped();
}
