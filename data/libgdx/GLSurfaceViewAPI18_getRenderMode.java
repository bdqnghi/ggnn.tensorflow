public int getRenderMode() {
    synchronized (sGLThreadManager) {
        return mRenderMode;
    }
}
