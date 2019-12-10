void resume() {
    synchronized (synch) {
        running = true;
        resume = true;
    }
}
