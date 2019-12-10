public void postRunnable(Runnable runnable) {
    synchronized (runnables) {
        runnables.add(runnable);
        graphics.requestRendering();
    }
}
