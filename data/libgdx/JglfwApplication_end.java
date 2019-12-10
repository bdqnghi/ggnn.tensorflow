/**
 * Called when the game loop has exited.
 */
protected void end() {
    synchronized (lifecycleListeners) {
        for (LifecycleListener listener : lifecycleListeners) {
            listener.pause();
            listener.dispose();
        }
    }
    listener.pause();
    listener.dispose();
    glfwTerminate();
    if (forceExit)
        System.exit(-1);
}
