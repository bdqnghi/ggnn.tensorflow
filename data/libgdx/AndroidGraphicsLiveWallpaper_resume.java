@Override
void resume() {
    synchronized (synch) {
        running = true;
        resume = true;
        // by jw: added synchronization, there was nothing before
        while (resume) {
            try {
                synch.wait();
            } catch (InterruptedException ignored) {
                Gdx.app.log("AndroidGraphics", "waiting for resume synchronization failed!");
            }
        }
    }
}
