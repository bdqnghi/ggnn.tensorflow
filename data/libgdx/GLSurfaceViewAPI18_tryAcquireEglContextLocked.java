/*
         * Tries once to acquire the right to use an EGL
         * context. Does not block. Requires that we are already
         * in the sGLThreadManager monitor when this is called.
         *
         * @return true if the right to use an EGL context was acquired.
         */
public boolean tryAcquireEglContextLocked(GLThread thread) {
    if (mEglOwner == thread || mEglOwner == null) {
        mEglOwner = thread;
        notifyAll();
        return true;
    }
    checkGLESVersion();
    if (mMultipleGLESContextsAllowed) {
        return true;
    }
    // reacquire the EGL context.
    if (mEglOwner != null) {
        mEglOwner.requestReleaseEglContextLocked();
    }
    return false;
}
