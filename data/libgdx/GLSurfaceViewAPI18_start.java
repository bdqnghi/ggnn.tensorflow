/**
 * Initialize EGL for a given configuration spec.
 */
public void start() {
    if (LOG_EGL) {
        Log.w("EglHelper", "start() tid=" + Thread.currentThread().getId());
    }
    /*
             * Get an EGL instance
             */
    mEgl = (EGL10) EGLContext.getEGL();
    /*
             * Get to the default display.
             */
    mEglDisplay = mEgl.eglGetDisplay(EGL10.EGL_DEFAULT_DISPLAY);
    if (mEglDisplay == EGL10.EGL_NO_DISPLAY) {
        throw new RuntimeException("eglGetDisplay failed");
    }
    /*
             * We can now initialize EGL for that display
             */
    int[] version = new int[2];
    if (!mEgl.eglInitialize(mEglDisplay, version)) {
        throw new RuntimeException("eglInitialize failed");
    }
    GLSurfaceViewAPI18 view = mGLSurfaceViewWeakRef.get();
    if (view == null) {
        mEglConfig = null;
        mEglContext = null;
    } else {
        mEglConfig = view.mEGLConfigChooser.chooseConfig(mEgl, mEglDisplay);
        /*
                * Create an EGL context. We want to do this as rarely as we can, because an
                * EGL context is a somewhat heavy object.
                */
        mEglContext = view.mEGLContextFactory.createContext(mEgl, mEglDisplay, mEglConfig);
    }
    if (mEglContext == null || mEglContext == EGL10.EGL_NO_CONTEXT) {
        mEglContext = null;
        throwEglException("createContext");
    }
    if (LOG_EGL) {
        Log.w("EglHelper", "createContext " + mEglContext + " tid=" + Thread.currentThread().getId());
    }
    mEglSurface = null;
}
