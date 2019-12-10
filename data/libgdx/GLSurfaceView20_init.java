private void init(boolean translucent, int depth, int stencil) {
    /*
		 * By default, GLSurfaceView() creates a RGB_565 opaque surface. If we want a translucent one, we should change the
		 * surface's format here, using PixelFormat.TRANSLUCENT for GL Surfaces is interpreted as any 32-bit surface with alpha by
		 * SurfaceFlinger.
		 */
    if (translucent) {
        this.getHolder().setFormat(PixelFormat.TRANSLUCENT);
    }
    /*
		 * Setup the context factory for 2.0 rendering. See ContextFactory class definition below
		 */
    setEGLContextFactory(new ContextFactory());
    /*
		 * We need to choose an EGLConfig that matches the format of our surface exactly. This is going to be done in our custom
		 * config chooser. See ConfigChooser class definition below.
		 */
    setEGLConfigChooser(translucent ? new ConfigChooser(8, 8, 8, 8, depth, stencil) : new ConfigChooser(5, 6, 5, 0, depth, stencil));
/* Set the renderer responsible for frame rendering */
}
