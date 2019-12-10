public EGLContext createContext(EGL10 egl, EGLDisplay display, EGLConfig config) {
    int[] attrib_list = { EGL_CONTEXT_CLIENT_VERSION, mEGLContextClientVersion, EGL10.EGL_NONE };
    return egl.eglCreateContext(display, config, EGL10.EGL_NO_CONTEXT, mEGLContextClientVersion != 0 ? attrib_list : null);
}
