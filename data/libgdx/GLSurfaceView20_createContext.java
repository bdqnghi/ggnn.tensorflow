public EGLContext createContext(EGL10 egl, EGLDisplay display, EGLConfig eglConfig) {
    Log.w(TAG, "creating OpenGL ES 2.0 context");
    checkEglError("Before eglCreateContext", egl);
    int[] attrib_list = { EGL_CONTEXT_CLIENT_VERSION, 2, EGL10.EGL_NONE };
    EGLContext context = egl.eglCreateContext(display, eglConfig, EGL10.EGL_NO_CONTEXT, attrib_list);
    checkEglError("After eglCreateContext", egl);
    return context;
}
