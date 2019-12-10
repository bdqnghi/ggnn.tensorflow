/**
 * Install a config chooser which will choose a config
 * with at least the specified depthSize and stencilSize,
 * and exactly the specified redSize, greenSize, blueSize and alphaSize.
 * <p>If this method is
 * called, it must be called before {@link #setRenderer(Renderer)}
 * is called.
 * <p>
 * If no setEGLConfigChooser method is called, then by default the
 * view will choose an RGB_888 surface with a depth buffer depth of
 * at least 16 bits.
 */
public void setEGLConfigChooser(int redSize, int greenSize, int blueSize, int alphaSize, int depthSize, int stencilSize) {
    setEGLConfigChooser(new ComponentSizeChooser(redSize, greenSize, blueSize, alphaSize, depthSize, stencilSize));
}
