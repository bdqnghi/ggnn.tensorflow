/**
 * Create a GL object for the current EGL context.
 */
GL createGL() {
    GL gl = mEglContext.getGL();
    GLSurfaceViewAPI18 view = mGLSurfaceViewWeakRef.get();
    if (view != null) {
        if (view.mGLWrapper != null) {
            gl = view.mGLWrapper.wrap(gl);
        }
        if ((view.mDebugFlags & (DEBUG_CHECK_GL_ERROR | DEBUG_LOG_GL_CALLS)) != 0) {
            int configFlags = 0;
            Writer log = null;
            if ((view.mDebugFlags & DEBUG_CHECK_GL_ERROR) != 0) {
                configFlags |= GLDebugHelper.CONFIG_CHECK_GL_ERROR;
            }
            if ((view.mDebugFlags & DEBUG_LOG_GL_CALLS) != 0) {
                log = new LogWriter();
            }
            gl = GLDebugHelper.wrap(gl, configFlags, log);
        }
    }
    return gl;
}
