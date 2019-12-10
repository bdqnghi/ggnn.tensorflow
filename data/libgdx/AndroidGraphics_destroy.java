void destroy() {
    synchronized (synch) {
        running = false;
        destroy = true;
        while (destroy) {
            try {
                synch.wait();
            } catch (InterruptedException ex) {
                Gdx.app.log(LOG_TAG, "waiting for destroy synchronization failed!");
            }
        }
    }
}
