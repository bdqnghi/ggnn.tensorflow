final boolean didFinishLaunching(UIApplication uiApp, UIApplicationLaunchOptions options) {
    Gdx.app = this;
    this.uiApp = uiApp;
    // enable or disable screen dimming
    UIApplication.getSharedApplication().setIdleTimerDisabled(config.preventScreenDimming);
    Gdx.app.debug("IOSApplication", "iOS version: " + UIDevice.getCurrentDevice().getSystemVersion());
    // fix the scale factor if we have a retina device (NOTE: iOS screen sizes are in "points" not pixels by default!)
    Gdx.app.debug("IOSApplication", "Running in " + (Bro.IS_64BIT ? "64-bit" : "32-bit") + " mode");
    float scale = (float) (getIosVersion() >= 8 ? UIScreen.getMainScreen().getNativeScale() : UIScreen.getMainScreen().getScale());
    if (scale >= 2.0f) {
        Gdx.app.debug("IOSApplication", "scale: " + scale);
        if (UIDevice.getCurrentDevice().getUserInterfaceIdiom() == UIUserInterfaceIdiom.Pad) {
            // it's an iPad!
            displayScaleFactor = config.displayScaleLargeScreenIfRetina * scale;
        } else {
            // it's an iPod or iPhone
            displayScaleFactor = config.displayScaleSmallScreenIfRetina * scale;
        }
    } else {
        // no retina screen: no scaling!
        if (UIDevice.getCurrentDevice().getUserInterfaceIdiom() == UIUserInterfaceIdiom.Pad) {
            // it's an iPad!
            displayScaleFactor = config.displayScaleLargeScreenIfNonRetina;
        } else {
            // it's an iPod or iPhone
            displayScaleFactor = config.displayScaleSmallScreenIfNonRetina;
        }
    }
    GL20 gl20 = new IOSGLES20();
    Gdx.gl = gl20;
    Gdx.gl20 = gl20;
    // setup libgdx
    this.input = new IOSInput(this);
    this.graphics = new IOSGraphics(getBounds(null), scale, this, config, input, gl20);
    this.files = new IOSFiles();
    this.audio = new IOSAudio(config);
    this.net = new IOSNet(this);
    Gdx.files = this.files;
    Gdx.graphics = this.graphics;
    Gdx.audio = this.audio;
    Gdx.input = this.input;
    Gdx.net = this.net;
    this.input.setupPeripherals();
    this.uiWindow = new UIWindow(UIScreen.getMainScreen().getBounds());
    this.uiWindow.setRootViewController(this.graphics.viewController);
    this.uiWindow.makeKeyAndVisible();
    Gdx.app.debug("IOSApplication", "created");
    return true;
}
