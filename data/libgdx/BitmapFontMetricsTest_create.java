@Override
public void create() {
    spriteBatch = new SpriteBatch();
    atlas = new TextureAtlas("data/pack");
    smallFont = new BitmapFont();
    font = new BitmapFont(Gdx.files.internal("data/verdana39.fnt"), atlas.findRegion("verdana39"), false);
    font = new BitmapFont(Gdx.files.internal("data/arial-32-pad.fnt"), false);
    renderer = new ShapeRenderer();
    renderer.setProjectionMatrix(spriteBatch.getProjectionMatrix());
}
