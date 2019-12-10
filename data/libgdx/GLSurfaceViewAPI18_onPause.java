public void onPause() {
    synchronized (sGLThreadManager) {
        if (LOG_PAUSE_RESUME) {
            Log.i("GLThread", "onPause tid=" + getId());
        }
        mRequestPaused = true;
        sGLThreadManager.notifyAll();
        while ((!mExited) && (!mPaused)) {
            if (LOG_PAUSE_RESUME) {
                Log.i("Main thread", "onPause waiting for mPaused.");
            }
            try {
                sGLThreadManager.wait();
            } catch (InterruptedException ex) {
                Thread.currentThread().interrupt();
            }
        }
    }
}
