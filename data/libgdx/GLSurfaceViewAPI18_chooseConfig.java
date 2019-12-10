@Override
public EGLConfig chooseConfig(EGL10 egl, EGLDisplay display, EGLConfig[] configs) {
    for (EGLConfig config : configs) {
        int d = findConfigAttrib(egl, display, config, EGL10.EGL_DEPTH_SIZE, 0);
        int s = findConfigAttrib(egl, display, config, EGL10.EGL_STENCIL_SIZE, 0);
        if ((d >= mDepthSize) && (s >= mStencilSize)) {
            int r = findConfigAttrib(egl, display, config, EGL10.EGL_RED_SIZE, 0);
            int g = findConfigAttrib(egl, display, config, EGL10.EGL_GREEN_SIZE, 0);
            int b = findConfigAttrib(egl, display, config, EGL10.EGL_BLUE_SIZE, 0);
            int a = findConfigAttrib(egl, display, config, EGL10.EGL_ALPHA_SIZE, 0);
            if ((r == mRedSize) && (g == mGreenSize) && (b == mBlueSize) && (a == mAlphaSize)) {
                return config;
            }
        }
    }
    return null;
}
