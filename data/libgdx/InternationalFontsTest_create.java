@Override
public void create() {
    FreeTypeFontGenerator generator = new FreeTypeFontGenerator(Gdx.files.internal("data/unbom.ttf"));
    FreeTypeFontParameter parameter = new FreeTypeFontParameter();
    parameter.size = 18;
    parameter.characters = "한국어/조선�?";
    koreanFont = generator.generateFont(parameter);
    generator.dispose();
    parameter.characters = FreeTypeFontGenerator.DEFAULT_CHARS;
    generator = new FreeTypeFontGenerator(Gdx.files.internal("data/russkij.ttf"));
    cyrillicFont = generator.generateFont(parameter);
    generator.dispose();
    parameter.characters = "วรณยุ�?ต์";
    generator = new FreeTypeFontGenerator(Gdx.files.internal("data/garuda.ttf"));
    thaiFont = generator.generateFont(parameter);
    generator.dispose();
    batch = new SpriteBatch();
    cam = new OrthographicCamera();
    cam.setToOrtho(false, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.update();
}
