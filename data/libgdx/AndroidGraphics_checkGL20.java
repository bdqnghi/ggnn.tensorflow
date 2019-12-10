protected boolean checkGL20() {
    EGL10 egl = (EGL10) EGLContext.getEGL();
    EGLDisplay display = egl.eglGetDisplay(EGL10.EGL_DEFAULT_DISPLAY);
    int[] version = new int[2];
    egl.eglInitialize(display, version);
    int EGL_OPENGL_ES2_BIT = 4;
    int[] configAttribs = { EGL10.EGL_RED_SIZE, 4, EGL10.EGL_GREEN_SIZE, 4, EGL10.EGL_BLUE_SIZE, 4, EGL10.EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT, EGL10.EGL_NONE };
    EGLConfig[] configs = new EGLConfig[10];
    int[] num_config = new int[1];
    egl.eglChooseConfig(display, configAttribs, configs, 10, num_config);
    egl.eglTerminate(display);
    return num_config[0] > 0;
}
