public void initialize(ApplicationListener listener, AndroidApplicationConfiguration config) {
    if (this.getVersion() < MINIMUM_SDK) {
        throw new GdxRuntimeException("LibGDX requires Android API Level " + MINIMUM_SDK + " or later.");
    }
    graphics = new AndroidGraphicsLiveWallpaper(this, config, config.resolutionStrategy == null ? new FillResolutionStrategy() : config.resolutionStrategy);
    // factory in use, but note: AndroidInputFactory causes exceptions when obfuscated: java.lang.RuntimeException: Couldn't
    // construct AndroidInput, this should never happen, proguard deletes constructor used only by reflection
    input = AndroidInputFactory.newAndroidInput(this, this.getService(), graphics.view, config);
    // input = new AndroidInput(this, this.getService(), null, config);
    audio = new AndroidAudio(this.getService(), config);
    // added initialization of android local storage: /data/data/<app package>/files/
    // workaround for Android bug #10515463
    this.getService().getFilesDir();
    files = new AndroidFiles(this.getService().getAssets(), this.getService().getFilesDir().getAbsolutePath());
    net = new AndroidNet(this);
    this.listener = listener;
    // Unlike activity, fragment and daydream applications there's no need for a specialized audio listener.
    // See description in onPause method.
    Gdx.app = this;
    Gdx.input = input;
    Gdx.audio = audio;
    Gdx.files = files;
    Gdx.graphics = graphics;
    Gdx.net = net;
}
