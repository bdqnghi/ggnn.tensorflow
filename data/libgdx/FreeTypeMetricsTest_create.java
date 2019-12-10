@Override
public void create() {
    spriteBatch = new SpriteBatch();
    atlas = new TextureAtlas("data/pack");
    smallFont = new BitmapFont();
    FreeTypeFontParameter parameter = new FreeTypeFontParameter();
    parameter.size = 60;
    FreeTypeFontGenerator generator = new FreeTypeFontGenerator(Gdx.files.internal("data/arial.ttf"));
    font = generator.generateFont(parameter);
    generator.dispose();
    renderer = new ShapeRenderer();
    renderer.setProjectionMatrix(spriteBatch.getProjectionMatrix());
}
