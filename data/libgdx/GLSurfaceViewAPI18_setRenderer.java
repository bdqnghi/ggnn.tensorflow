/**
 * Set the renderer associated with this view. Also starts the thread that
 * will call the renderer, which in turn causes the rendering to start.
 * <p>This method should be called once and only once in the life-cycle of
 * a GLSurfaceView.
 * <p>The following GLSurfaceView methods can only be called <em>before</em>
 * setRenderer is called:
 * <ul>
 * <li>{@link #setEGLConfigChooser(boolean)}
 * <li>{@link #setEGLConfigChooser(EGLConfigChooser)}
 * <li>{@link #setEGLConfigChooser(int, int, int, int, int, int)}
 * </ul>
 * <p>
 * The following GLSurfaceView methods can only be called <em>after</em>
 * setRenderer is called:
 * <ul>
 * <li>{@link #getRenderMode()}
 * <li>{@link #onPause()}
 * <li>{@link #onResume()}
 * <li>{@link #queueEvent(Runnable)}
 * <li>{@link #requestRender()}
 * <li>{@link #setRenderMode(int)}
 * </ul>
 *
 * @param renderer the renderer to use to perform OpenGL drawing.
 */
public void setRenderer(Renderer renderer) {
    checkRenderThreadState();
    if (mEGLConfigChooser == null) {
        mEGLConfigChooser = new SimpleEGLConfigChooser(true);
    }
    if (mEGLContextFactory == null) {
        mEGLContextFactory = new DefaultContextFactory();
    }
    if (mEGLWindowSurfaceFactory == null) {
        mEGLWindowSurfaceFactory = new DefaultWindowSurfaceFactory();
    }
    mRenderer = renderer;
    mGLThread = new GLThread(mThisWeakRef);
    mGLThread.start();
}
