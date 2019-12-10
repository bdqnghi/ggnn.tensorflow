/**
 * Inform the default EGLContextFactory and default EGLConfigChooser
 * which EGLContext client version to pick.
 * <p>Use this method to create an OpenGL ES 2.0-compatible context.
 * Example:
 * <pre class="prettyprint">
 *     public MyView(Context context) {
 *         super(context);
 *         setEGLContextClientVersion(2); // Pick an OpenGL ES 2.0 context.
 *         setRenderer(new MyRenderer());
 *     }
 * </pre>
 * <p>Note: Activities which require OpenGL ES 2.0 should indicate this by
 * setting @lt;uses-feature android:glEsVersion="0x00020000" /> in the activity's
 * AndroidManifest.xml file.
 * <p>If this method is called, it must be called before {@link #setRenderer(Renderer)}
 * is called.
 * <p>This method only affects the behavior of the default EGLContexFactory and the
 * default EGLConfigChooser. If
 * {@link #setEGLContextFactory(EGLContextFactory)} has been called, then the supplied
 * EGLContextFactory is responsible for creating an OpenGL ES 2.0-compatible context.
 * If
 * {@link #setEGLConfigChooser(EGLConfigChooser)} has been called, then the supplied
 * EGLConfigChooser is responsible for choosing an OpenGL ES 2.0-compatible config.
 * @param version The EGLContext client version to choose. Use 2 for OpenGL ES 2.0
 */
public void setEGLContextClientVersion(int version) {
    checkRenderThreadState();
    mEGLContextClientVersion = version;
}
