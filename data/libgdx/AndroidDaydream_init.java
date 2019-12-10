private void init(ApplicationListener listener, AndroidApplicationConfiguration config, boolean isForView) {
    graphics = new AndroidGraphics(this, config, config.resolutionStrategy == null ? new FillResolutionStrategy() : config.resolutionStrategy);
    input = AndroidInputFactory.newAndroidInput(this, this, graphics.view, config);
    audio = new AndroidAudio(this, config);
    // workaround for Android bug #10515463
    this.getFilesDir();
    files = new AndroidFiles(this.getAssets(), this.getFilesDir().getAbsolutePath());
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
            audio = null;
        }
    });
    Gdx.app = this;
    Gdx.input = this.getInput();
    Gdx.audio = this.getAudio();
    Gdx.files = this.getFiles();
    Gdx.graphics = this.getGraphics();
    Gdx.net = this.getNet();
    if (!isForView) {
        setFullscreen(true);
        setContentView(graphics.getView(), createLayoutParams());
    }
    createWakeLock(config.useWakelock);
    hideStatusBar(config);
}
