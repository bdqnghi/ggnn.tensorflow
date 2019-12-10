static void checkEglError(String prompt, EGL10 egl) {
    int error;
    while ((error = egl.eglGetError()) != EGL10.EGL_SUCCESS) {
        Log.e(TAG, String.format("%s: EGL error: 0x%x", prompt, error));
    }
}
