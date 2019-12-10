@Override
public void create() {
    boolean flip = false;
    batch = new SpriteBatch();
    if (flip) {
        OrthographicCamera cam = new OrthographicCamera();
        cam.setToOrtho(flip);
        cam.update();
        batch.setProjectionMatrix(cam.combined);
    }
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), flip);
    FileHandle fontFile = Gdx.files.internal("data/arial.ttf");
    FreeTypeFontGenerator generator = new FreeTypeFontGenerator(fontFile);
    FreeTypeFontParameter parameter = new FreeTypeFontParameter();
    parameter.size = 15;
    parameter.flip = flip;
    parameter.genMipMaps = true;
    // parameter.shadowOffsetX = 1;
    // parameter.shadowOffsetY = 1;
    // parameter.shadowColor = Color.GREEN;
    // parameter.borderWidth = 1f;
    // parameter.borderColor = Color.PURPLE;
    FreeTypeBitmapFontData fontData = generator.generateData(parameter);
    ftFont = generator.generateFont(parameter);
    generator.dispose();
}
