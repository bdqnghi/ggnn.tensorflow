public void surfaceCreated() {
    synchronized (sGLThreadManager) {
        if (LOG_THREADS) {
            Log.i("GLThread", "surfaceCreated tid=" + getId());
        }
        mHasSurface = true;
        mFinishedCreatingEglSurface = false;
        sGLThreadManager.notifyAll();
        while (mWaitingForSurface && !mFinishedCreatingEglSurface && !mExited) {
            try {
                sGLThreadManager.wait();
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
    }
}
