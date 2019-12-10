private int findConfigAttrib(EGL10 egl, EGLDisplay display, EGLConfig config, int attribute, int defaultValue) {
    if (egl.eglGetConfigAttrib(display, config, attribute, mValue)) {
        return mValue[0];
    }
    return defaultValue;
}
