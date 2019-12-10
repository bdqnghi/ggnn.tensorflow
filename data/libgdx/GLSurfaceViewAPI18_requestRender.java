public void requestRender() {
    synchronized (sGLThreadManager) {
        mRequestRender = true;
        sGLThreadManager.notifyAll();
    }
}
