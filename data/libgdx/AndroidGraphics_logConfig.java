private void logConfig(EGLConfig config) {
    EGL10 egl = (EGL10) EGLContext.getEGL();
    EGLDisplay display = egl.eglGetDisplay(EGL10.EGL_DEFAULT_DISPLAY);
    int r = getAttrib(egl, display, config, EGL10.EGL_RED_SIZE, 0);
    int g = getAttrib(egl, display, config, EGL10.EGL_GREEN_SIZE, 0);
    int b = getAttrib(egl, display, config, EGL10.EGL_BLUE_SIZE, 0);
    int a = getAttrib(egl, display, config, EGL10.EGL_ALPHA_SIZE, 0);
    int d = getAttrib(egl, display, config, EGL10.EGL_DEPTH_SIZE, 0);
    int s = getAttrib(egl, display, config, EGL10.EGL_STENCIL_SIZE, 0);
    int samples = Math.max(getAttrib(egl, display, config, EGL10.EGL_SAMPLES, 0), getAttrib(egl, display, config, GdxEglConfigChooser.EGL_COVERAGE_SAMPLES_NV, 0));
    boolean coverageSample = getAttrib(egl, display, config, GdxEglConfigChooser.EGL_COVERAGE_SAMPLES_NV, 0) != 0;
    Gdx.app.log(LOG_TAG, "framebuffer: (" + r + ", " + g + ", " + b + ", " + a + ")");
    Gdx.app.log(LOG_TAG, "depthbuffer: (" + d + ")");
    Gdx.app.log(LOG_TAG, "stencilbuffer: (" + s + ")");
    Gdx.app.log(LOG_TAG, "samples: (" + samples + ")");
    Gdx.app.log(LOG_TAG, "coverage sampling: (" + coverageSample + ")");
    bufferFormat = new BufferFormat(r, g, b, a, d, s, samples, coverageSample);
}
