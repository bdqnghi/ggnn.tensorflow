/**
 * Create an egl surface for the current SurfaceHolder surface. If a surface
 * already exists, destroy it before creating the new surface.
 *
 * @return true if the surface was created successfully.
 */
public boolean createSurface() {
    if (LOG_EGL) {
        Log.w("EglHelper", "createSurface()  tid=" + Thread.currentThread().getId());
    }
    /*
             * Check preconditions.
             */
    if (mEgl == null) {
        throw new RuntimeException("egl not initialized");
    }
    if (mEglDisplay == null) {
        throw new RuntimeException("eglDisplay not initialized");
    }
    if (mEglConfig == null) {
        throw new RuntimeException("mEglConfig not initialized");
    }
    /*
             *  The window size has changed, so we need to create a new
             *  surface.
             */
    destroySurfaceImp();
    /*
             * Create an EGL surface we can render into.
             */
    GLSurfaceViewAPI18 view = mGLSurfaceViewWeakRef.get();
    if (view != null) {
        mEglSurface = view.mEGLWindowSurfaceFactory.createWindowSurface(mEgl, mEglDisplay, mEglConfig, view.getHolder());
    } else {
        mEglSurface = null;
    }
    if (mEglSurface == null || mEglSurface == EGL10.EGL_NO_SURFACE) {
        int error = mEgl.eglGetError();
        if (error == EGL10.EGL_BAD_NATIVE_WINDOW) {
            Log.e("EglHelper", "createWindowSurface returned EGL_BAD_NATIVE_WINDOW.");
        }
        return false;
    }
    /*
             * Before we can issue GL commands, we need to make sure
             * the context is current and bound to a surface.
             */
    if (!mEgl.eglMakeCurrent(mEglDisplay, mEglSurface, mEglSurface, mEglContext)) {
        /*
                 * Could not make the context current, probably because the underlying
                 * SurfaceView surface has been destroyed.
                 */
        logEglErrorAsWarning("EGLHelper", "eglMakeCurrent", mEgl.eglGetError());
        return false;
    }
    return true;
}
