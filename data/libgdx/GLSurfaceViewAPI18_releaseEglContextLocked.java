/*
         * Releases the EGL context. Requires that we are already in the
         * sGLThreadManager monitor when this is called.
         */
public void releaseEglContextLocked(GLThread thread) {
    if (mEglOwner == thread) {
        mEglOwner = null;
    }
    notifyAll();
}
