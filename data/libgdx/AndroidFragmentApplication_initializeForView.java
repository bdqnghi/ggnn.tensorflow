/**
 * This method has to be called in the
 * {@link Fragment#onCreateView(android.view.LayoutInflater, android.view.ViewGroup, android.os.Bundle)} method. It sets up all
 * the things necessary to get input, render via OpenGL and so on. You can configure other aspects of the application with the
 * rest of the fields in the {@link AndroidApplicationConfiguration} instance.
 * <p/>
 * Note: you have to return the returned view from
 * {@link Fragment#onCreateView(android.view.LayoutInflater, android.view.ViewGroup, android.os.Bundle)}
 *
 * @param listener the {@link ApplicationListener} implementing the program logic
 * @param config the {@link AndroidApplicationConfiguration}, defining various settings of the application (use accelerometer,
 *           etc.).
 * @return the GLSurfaceView of the application
 */
public View initializeForView(ApplicationListener listener, AndroidApplicationConfiguration config) {
    if (this.getVersion() < MINIMUM_SDK) {
        throw new GdxRuntimeException("LibGDX requires Android API Level " + MINIMUM_SDK + " or later.");
    }
    graphics = new AndroidGraphics(this, config, config.resolutionStrategy == null ? new FillResolutionStrategy() : config.resolutionStrategy);
    input = AndroidInputFactory.newAndroidInput(this, getActivity(), graphics.view, config);
    audio = new AndroidAudio(getActivity(), config);
    files = new AndroidFiles(getResources().getAssets(), getActivity().getFilesDir().getAbsolutePath());
    net = new AndroidNet(this);
    this.listener = listener;
    this.handler = new Handler();
    // Add a specialized audio lifecycle listener
    addLifecycleListener(new LifecycleListener() {

        @Override
        public void resume() {
            audio.resume();
        }

        @Override
        public void pause() {
            audio.pause();
        }

        @Override
        public void dispose() {
            audio.dispose();
        }
    });
    Gdx.app = this;
    Gdx.input = this.getInput();
    Gdx.audio = this.getAudio();
    Gdx.files = this.getFiles();
    Gdx.graphics = this.getGraphics();
    Gdx.net = this.getNet();
    createWakeLock(config.useWakelock);
    useImmersiveMode(config.useImmersiveMode);
    if (config.useImmersiveMode && getVersion() >= Build.VERSION_CODES.KITKAT) {
        try {
            Class<?> vlistener = Class.forName("com.badlogic.gdx.backends.android.AndroidVisibilityListener");
            Object o = vlistener.newInstance();
            Method method = vlistener.getDeclaredMethod("createListener", AndroidApplicationBase.class);
            method.invoke(o, this);
        } catch (Exception e) {
            log("AndroidApplication", "Failed to create AndroidVisibilityListener", e);
        }
    }
    return graphics.getView();
}
