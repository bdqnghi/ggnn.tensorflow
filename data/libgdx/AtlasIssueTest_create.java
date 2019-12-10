public void create() {
    batch = new SpriteBatch();
    batch.setProjectionMatrix(new Matrix4().setToOrtho2D(0, 0, 855, 480));
    atlas = new TextureAtlas(Gdx.files.internal("data/issue_pack"), Gdx.files.internal("data/"));
    sprite = atlas.createSprite("map");
    font = new BitmapFont(Gdx.files.internal("data/font.fnt"), Gdx.files.internal("data/font.png"), false);
    Gdx.gl.glClearColor(0, 1, 0, 1);
}
