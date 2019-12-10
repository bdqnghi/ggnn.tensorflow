public EGLSurface createWindowSurface(EGL10 egl, EGLDisplay display, EGLConfig config, Object nativeWindow) {
    EGLSurface result = null;
    try {
        result = egl.eglCreateWindowSurface(display, config, nativeWindow, null);
    } catch (IllegalArgumentException e) {
        // This exception indicates that the surface flinger surface
        // is not valid. This can happen if the surface flinger surface has
        // been torn down, but the application has not yet been
        // notified via SurfaceHolder.Callback.surfaceDestroyed.
        // In theory the application should be notified first,
        // but in practice sometimes it is not. See b/4588890
        Log.e(TAG, "eglCreateWindowSurface", e);
    }
    return result;
}
