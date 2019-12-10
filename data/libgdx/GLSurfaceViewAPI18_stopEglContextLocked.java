/*
         * This private method should only be called inside a
         * synchronized(sGLThreadManager) block.
         */
private void stopEglContextLocked() {
    if (mHaveEglContext) {
        mEglHelper.finish();
        mHaveEglContext = false;
        sGLThreadManager.releaseEglContextLocked(this);
    }
}
