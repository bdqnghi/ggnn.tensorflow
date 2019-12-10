void mainLoop() {
    Array<LifecycleListener> lifecycleListeners = this.lifecycleListeners;
    listener.create();
    boolean wasActive = true;
    // unlike LwjglApplication, a headless application will eat up CPU in this while loop
    // it is up to the implementation to call Thread.sleep as necessary
    long t = TimeUtils.nanoTime() + renderInterval;
    if (renderInterval >= 0f) {
        while (running) {
            final long n = TimeUtils.nanoTime();
            if (t > n) {
                try {
                    Thread.sleep((t - n) / 1000000);
                } catch (InterruptedException e) {
                }
                t = TimeUtils.nanoTime() + renderInterval;
            } else
                t = n + renderInterval;
            executeRunnables();
            graphics.incrementFrameId();
            listener.render();
            graphics.updateTime();
            // If one of the runnables set running to false, for example after an exit().
            if (!running)
                break;
        }
    }
    synchronized (lifecycleListeners) {
        for (LifecycleListener listener : lifecycleListeners) {
            listener.pause();
            listener.dispose();
        }
    }
    listener.pause();
    listener.dispose();
}
