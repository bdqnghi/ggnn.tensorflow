/**
 * Install a custom EGLContextFactory.
 * <p>If this method is
 * called, it must be called before {@link #setRenderer(Renderer)}
 * is called.
 * <p>
 * If this method is not called, then by default
 * a context will be created with no shared context and
 * with a null attribute list.
 */
public void setEGLContextFactory(EGLContextFactory factory) {
    checkRenderThreadState();
    mEGLContextFactory = factory;
}
