@Override
public void create() {
    if ((((AndroidFiles) Gdx.files)).setAPKExpansion(1, 0)) {
        resolver = new ZipFileHandleResolver();
    } else {
        Gdx.app.error("libgdx", "No Expansion can be opened");
    }
    assetManager = new AssetManager();
    FileHandleResolver resolver = new InternalFileHandleResolver();
    assetManager.setLoader(FreeTypeFontGenerator.class, new FreeTypeFontGeneratorLoader(resolver));
    assetManager.setLoader(BitmapFont.class, ".ttf", new FreetypeFontLoader(resolver));
    loadFont(assetManager, "data/DroidSerif-Regular.ttf", 12);
    loadFont(assetManager, "data/" + extensionPrefix + "DroidSerif-Regular.ttf", 12);
    assetManager.load("data/" + extensionPrefix + "testpackobb", TextureAtlas.class);
    assetManager.finishLoading();
    sound = Gdx.audio.newSound(Gdx.files.internal("data/" + extensionPrefix + "chirp.ogg"));
    sound.play();
    texture = new Texture(resolver.resolve("data/" + extensionPrefix + "badlogic.jpg"));
    batch = new SpriteBatch();
    TextureAtlas atlas = assetManager.get("data/" + extensionPrefix + "testpackobb");
    atlasTextureRegion = new TextureRegion(atlas.findRegion("water"));
    sound = Gdx.audio.newSound(Gdx.files.internal("data/shotgun.ogg"));
    sound.play();
}
