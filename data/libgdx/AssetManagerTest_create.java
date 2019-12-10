public void create() {
    Gdx.app.setLogLevel(Application.LOG_ERROR);
    Resolution[] resolutions = { new Resolution(320, 480, ".320480"), new Resolution(480, 800, ".480800"), new Resolution(480, 856, ".480854") };
    ResolutionFileResolver resolver = new ResolutionFileResolver(new InternalFileHandleResolver(), resolutions);
    manager = new AssetManager();
    manager.setLoader(Texture.class, new TextureLoader(resolver));
    manager.setErrorListener(this);
    load();
    Texture.setAssetManager(manager);
    batch = new SpriteBatch();
    font = new BitmapFont(Gdx.files.internal("data/font.fnt"), false);
}
