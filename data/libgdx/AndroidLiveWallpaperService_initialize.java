/**
 * This method has to be called in the {@link AndroidLiveWallpaperService#onCreateApplication} method. It sets up all the
 * things necessary to get input, render via OpenGL and so on. You can configure other aspects of the application with the rest
 * of the fields in the {@link AndroidApplicationConfiguration} instance.
 *
 * @param listener the {@link ApplicationListener} implementing the program logic
 * @param config the {@link AndroidApplicationConfiguration}, defining various settings of the application (use accelerometer,
 *           etc.). Do not change contents of this object after passing to this method!
 */
public void initialize(ApplicationListener listener, AndroidApplicationConfiguration config) {
    if (DEBUG)
        Log.d(TAG, " > AndroidLiveWallpaperService - initialize()");
    app.initialize(listener, config);
    if (config.getTouchEventsForLiveWallpaper && Integer.parseInt(android.os.Build.VERSION.SDK) >= 7)
        linkedEngine.setTouchEventsEnabled(true);
// onResume(); do not call it there
}
