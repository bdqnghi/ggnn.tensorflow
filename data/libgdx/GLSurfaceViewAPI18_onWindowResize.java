public void onWindowResize(int w, int h) {
    synchronized (sGLThreadManager) {
        mWidth = w;
        mHeight = h;
        mSizeChanged = true;
        mRequestRender = true;
        mRenderComplete = false;
        sGLThreadManager.notifyAll();
        // Wait for thread to react to resize and render a frame
        while (!mExited && !mPaused && !mRenderComplete && ableToDraw()) {
            if (LOG_SURFACE) {
                Log.i("Main thread", "onWindowResize waiting for render complete from tid=" + getId());
            }
            try {
                sGLThreadManager.wait();
            } catch (InterruptedException ex) {
                Thread.currentThread().interrupt();
            }
        }
    }
}
