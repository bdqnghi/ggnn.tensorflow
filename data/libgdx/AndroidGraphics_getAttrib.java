private int getAttrib(EGL10 egl, EGLDisplay display, EGLConfig config, int attrib, int defValue) {
    if (egl.eglGetConfigAttrib(display, config, attrib, value)) {
        return value[0];
    }
    return defValue;
}
