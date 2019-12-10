void pause() {
    synchronized (synch) {
        if (!running)
            return;
        running = false;
        pause = true;
        while (pause) {
            try {
                // TODO: fix deadlock race condition with quick resume/pause.
                // Temporary workaround:
                // Android ANR time is 5 seconds, so wait up to 4 seconds before assuming
                // deadlock and killing process. This can easily be triggered by opening the
                // Recent Apps list and then double-tapping the Recent Apps button with
                // ~500ms between taps.
                synch.wait(4000);
                if (pause) {
                    // pause will never go false if onDrawFrame is never called by the GLThread
                    // when entering this method, we MUST enforce continuous rendering
                    Gdx.app.error(LOG_TAG, "waiting for pause synchronization took too long; assuming deadlock and killing");
                    android.os.Process.killProcess(android.os.Process.myPid());
                }
            } catch (InterruptedException ignored) {
                Gdx.app.log(LOG_TAG, "waiting for pause synchronization failed!");
            }
        }
    }
}
