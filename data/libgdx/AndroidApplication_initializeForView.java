/**
 * This method has to be called in the {@link Activity#onCreate(Bundle)} method. It sets up all the things necessary to get
 * input, render via OpenGL and so on. You can configure other aspects of the application with the rest of the fields in the
 * {@link AndroidApplicationConfiguration} instance.
 * <p>
 * Note: you have to add the returned view to your layout!
 *
 * @param listener the {@link ApplicationListener} implementing the program logic
 * @param config the {@link AndroidApplicationConfiguration}, defining various settings of the application (use accelerometer,
 *           etc.).
 * @return the GLSurfaceView of the application
 */
public View initializeForView(ApplicationListener listener, AndroidApplicationConfiguration config) {
    init(listener, config, true);
    return graphics.getView();
}
