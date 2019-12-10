/**
 * Install a custom EGLWindowSurfaceFactory.
 * <p>If this method is
 * called, it must be called before {@link #setRenderer(Renderer)}
 * is called.
 * <p>
 * If this method is not called, then by default
 * a window surface will be created with a null attribute list.
 */
public void setEGLWindowSurfaceFactory(EGLWindowSurfaceFactory factory) {
    checkRenderThreadState();
    mEGLWindowSurfaceFactory = factory;
}
