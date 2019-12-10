public void surfaceDestroyed() {
    synchronized (sGLThreadManager) {
        if (LOG_THREADS) {
            Log.i("GLThread", "surfaceDestroyed tid=" + getId());
        }
        mHasSurface = false;
        sGLThreadManager.notifyAll();
        while ((!mWaitingForSurface) && (!mExited)) {
            try {
                sGLThreadManager.wait();
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
    }
}
