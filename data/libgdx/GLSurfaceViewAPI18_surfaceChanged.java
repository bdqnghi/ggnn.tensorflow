/**
 * This method is part of the SurfaceHolder.Callback interface, and is
 * not normally called or subclassed by clients of GLSurfaceView.
 */
public void surfaceChanged(SurfaceHolder holder, int format, int w, int h) {
    mGLThread.onWindowResize(w, h);
}
