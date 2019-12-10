public void onResume() {
    synchronized (sGLThreadManager) {
        if (LOG_PAUSE_RESUME) {
            Log.i("GLThread", "onResume tid=" + getId());
        }
        mRequestPaused = false;
        mRequestRender = true;
        mRenderComplete = false;
        sGLThreadManager.notifyAll();
        while ((!mExited) && mPaused && (!mRenderComplete)) {
            if (LOG_PAUSE_RESUME) {
                Log.i("Main thread", "onResume waiting for !mPaused.");
            }
            try {
                sGLThreadManager.wait();
            } catch (InterruptedException ex) {
                Thread.currentThread().interrupt();
            }
        }
    }
}
