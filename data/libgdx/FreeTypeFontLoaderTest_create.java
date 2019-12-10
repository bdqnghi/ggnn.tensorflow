@Override
public void create() {
    manager = new AssetManager();
    // set the loaders for the generator and the fonts themselves
    FileHandleResolver resolver = new InternalFileHandleResolver();
    manager.setLoader(FreeTypeFontGenerator.class, new FreeTypeFontGeneratorLoader(resolver));
    manager.setLoader(BitmapFont.class, ".ttf", new FreetypeFontLoader(resolver));
    // load to fonts via the generator (implicitely done by the FreetypeFontLoader).
    // Note: you MUST specify a FreetypeFontGenerator defining the ttf font file name and the size
    // of the font to be generated. The names of the fonts are arbitrary and are not pointing
    // to a file on disk!
    FreeTypeFontLoaderParameter size1Params = new FreeTypeFontLoaderParameter();
    size1Params.fontFileName = "data/arial.ttf";
    size1Params.fontParameters.size = 10;
    manager.load("size10.ttf", BitmapFont.class, size1Params);
    FreeTypeFontLoaderParameter size2Params = new FreeTypeFontLoaderParameter();
    size2Params.fontFileName = "data/arial.ttf";
    size2Params.fontParameters.size = 20;
    manager.load("size20.ttf", BitmapFont.class, size2Params);
    // we also load a "normal" font generated via Hiero
    manager.load("data/default.fnt", BitmapFont.class);
    batch = new SpriteBatch();
}
