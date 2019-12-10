private void init(ApplicationListener listener, AndroidApplicationConfiguration config, boolean isForView) {
    if (this.getVersion() < MINIMUM_SDK) {
        throw new GdxRuntimeException("LibGDX requires Android API Level " + MINIMUM_SDK + " or later.");
    }
    graphics = new AndroidGraphics(this, config, config.resolutionStrategy == null ? new FillResolutionStrategy() : config.resolutionStrategy);
    input = AndroidInputFactory.newAndroidInput(this, this, graphics.view, config);
    audio = new AndroidAudio(this, config);
    // workaround for Android bug #10515463
    this.getFilesDir();
    files = new AndroidFiles(this.getAssets(), this.getFilesDir().getAbsolutePath());
    net = new AndroidNet(this);
    this.listener = listener;
    this.handler = new Handler();
    this.useImmersiveMode = config.useImmersiveMode;
    this.hideStatusBar = config.hideStatusBar;
    // Add a specialized audio lifecycle listener
    addLifecycleListener(new LifecycleListener() {

        @Override
        public void resume() {
        // No need to resume audio here
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
    if (!isForView) {
        try {
            requestWindowFeature(Window.FEATURE_NO_TITLE);
        } catch (Exception ex) {
            log("AndroidApplication", "Content already displayed, cannot request FEATURE_NO_TITLE", ex);
        }
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN, WindowManager.LayoutParams.FLAG_FULLSCREEN);
        getWindow().clearFlags(WindowManager.LayoutParams.FLAG_FORCE_NOT_FULLSCREEN);
        setContentView(graphics.getView(), createLayoutParams());
    }
    createWakeLock(config.useWakelock);
    hideStatusBar(this.hideStatusBar);
    useImmersiveMode(this.useImmersiveMode);
    if (this.useImmersiveMode && getVersion() >= Build.VERSION_CODES.KITKAT) {
        try {
            Class<?> vlistener = Class.forName("com.badlogic.gdx.backends.android.AndroidVisibilityListener");
            Object o = vlistener.newInstance();
            Method method = vlistener.getDeclaredMethod("createListener", AndroidApplicationBase.class);
            method.invoke(o, this);
        } catch (Exception e) {
            log("AndroidApplication", "Failed to create AndroidVisibilityListener", e);
        }
    }
}
