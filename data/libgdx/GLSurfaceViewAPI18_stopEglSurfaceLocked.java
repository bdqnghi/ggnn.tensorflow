/*
         * This private method should only be called inside a
         * synchronized(sGLThreadManager) block.
         */
private void stopEglSurfaceLocked() {
    if (mHaveEglSurface) {
        mHaveEglSurface = false;
        mEglHelper.destroySurface();
    }
}
