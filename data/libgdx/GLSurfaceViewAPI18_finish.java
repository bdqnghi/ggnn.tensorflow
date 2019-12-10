public void finish() {
    if (LOG_EGL) {
        Log.w("EglHelper", "finish() tid=" + Thread.currentThread().getId());
    }
    if (mEglContext != null) {
        GLSurfaceViewAPI18 view = mGLSurfaceViewWeakRef.get();
        if (view != null) {
            view.mEGLContextFactory.destroyContext(mEgl, mEglDisplay, mEglContext);
        }
        mEglContext = null;
    }
    if (mEglDisplay != null) {
        mEgl.eglTerminate(mEglDisplay);
        mEglDisplay = null;
    }
}
