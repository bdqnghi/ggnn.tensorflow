/**
 * Display the current render surface.
 * @return the EGL error code from eglSwapBuffers.
 */
public int swap() {
    if (!mEgl.eglSwapBuffers(mEglDisplay, mEglSurface)) {
        return mEgl.eglGetError();
    }
    return EGL10.EGL_SUCCESS;
}
