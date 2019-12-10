/**
 * Control whether the EGL context is preserved when the GLSurfaceView is paused and
 * resumed.
 * <p>
 * If set to true, then the EGL context may be preserved when the GLSurfaceView is paused.
 * Whether the EGL context is actually preserved or not depends upon whether the
 * Android device that the program is running on can support an arbitrary number of EGL
 * contexts or not. Devices that can only support a limited number of EGL contexts must
 * release the  EGL context in order to allow multiple applications to share the GPU.
 * <p>
 * If set to false, the EGL context will be released when the GLSurfaceView is paused,
 * and recreated when the GLSurfaceView is resumed.
 * <p>
 *
 * The default is false.
 *
 * @param preserveOnPause preserve the EGL context when paused
 */
public void setPreserveEGLContextOnPause(boolean preserveOnPause) {
    mPreserveEGLContextOnPause = preserveOnPause;
}
