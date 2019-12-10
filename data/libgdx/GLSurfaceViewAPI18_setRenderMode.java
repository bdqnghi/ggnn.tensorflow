public void setRenderMode(int renderMode) {
    if (!((RENDERMODE_WHEN_DIRTY <= renderMode) && (renderMode <= RENDERMODE_CONTINUOUSLY))) {
        throw new IllegalArgumentException("renderMode");
    }
    synchronized (sGLThreadManager) {
        mRenderMode = renderMode;
        sGLThreadManager.notifyAll();
    }
}
