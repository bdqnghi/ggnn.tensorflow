public EGLConfig chooseConfig(EGL10 egl, EGLDisplay display, EGLConfig[] configs) {
    for (EGLConfig config : configs) {
        int d = findConfigAttrib(egl, display, config, EGL10.EGL_DEPTH_SIZE, 0);
        int s = findConfigAttrib(egl, display, config, EGL10.EGL_STENCIL_SIZE, 0);
        // We need at least mDepthSize and mStencilSize bits
        if (d < mDepthSize || s < mStencilSize)
            continue;
        // We want an *exact* match for red/green/blue/alpha
        int r = findConfigAttrib(egl, display, config, EGL10.EGL_RED_SIZE, 0);
        int g = findConfigAttrib(egl, display, config, EGL10.EGL_GREEN_SIZE, 0);
        int b = findConfigAttrib(egl, display, config, EGL10.EGL_BLUE_SIZE, 0);
        int a = findConfigAttrib(egl, display, config, EGL10.EGL_ALPHA_SIZE, 0);
        if (r == mRedSize && g == mGreenSize && b == mBlueSize && a == mAlphaSize)
            return config;
    }
    return null;
}
