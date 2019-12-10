public void destroyContext(EGL10 egl, EGLDisplay display, EGLContext context) {
    if (!egl.eglDestroyContext(display, context)) {
        Log.e("DefaultContextFactory", "display:" + display + " context: " + context);
        if (LOG_THREADS) {
            Log.i("DefaultContextFactory", "tid=" + Thread.currentThread().getId());
        }
        EglHelper.throwEglException("eglDestroyContex", egl.eglGetError());
    }
}
