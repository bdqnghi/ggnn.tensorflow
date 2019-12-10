public void destroyContext(EGL10 egl, EGLDisplay display, EGLContext context) {
    egl.eglDestroyContext(display, context);
}
