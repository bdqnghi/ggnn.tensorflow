public synchronized void checkGLDriver(GL10 gl) {
    if (!mGLESDriverCheckComplete) {
        checkGLESVersion();
        String renderer = gl.glGetString(GL10.GL_RENDERER);
        if (mGLESVersion < kGLES_20) {
            mMultipleGLESContextsAllowed = !renderer.startsWith(kMSM7K_RENDERER_PREFIX);
            notifyAll();
        }
        mLimitedGLESContexts = !mMultipleGLESContextsAllowed;
        if (LOG_SURFACE) {
            Log.w(TAG, "checkGLDriver renderer = \"" + renderer + "\" multipleContextsAllowed = " + mMultipleGLESContextsAllowed + " mLimitedGLESContexts = " + mLimitedGLESContexts);
        }
        mGLESDriverCheckComplete = true;
    }
}
