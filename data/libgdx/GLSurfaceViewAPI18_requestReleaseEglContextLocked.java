public void requestReleaseEglContextLocked() {
    mShouldReleaseEglContext = true;
    sGLThreadManager.notifyAll();
}
