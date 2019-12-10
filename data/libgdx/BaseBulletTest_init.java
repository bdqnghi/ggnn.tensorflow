public static void init() {
    if (initialized)
        return;
    // Need to initialize bullet before using it.
    if (Gdx.app.getType() == ApplicationType.Desktop && customDesktopLib != null) {
        System.load(customDesktopLib);
    } else
        Bullet.init();
    Gdx.app.log("Bullet", "Version = " + LinearMath.btGetVersion());
    initialized = true;
}
