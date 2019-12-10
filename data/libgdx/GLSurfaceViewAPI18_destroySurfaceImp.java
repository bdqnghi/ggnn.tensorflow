private void destroySurfaceImp() {
    if (mEglSurface != null && mEglSurface != EGL10.EGL_NO_SURFACE) {
        mEgl.eglMakeCurrent(mEglDisplay, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
        GLSurfaceViewAPI18 view = mGLSurfaceViewWeakRef.get();
        if (view != null) {
            view.mEGLWindowSurfaceFactory.destroySurface(mEgl, mEglDisplay, mEglSurface);
        }
        mEglSurface = null;
    }
}
