public void create() {
    batch = new SpriteBatch();
    sceneMatrix = new Matrix4().setToOrtho2D(0, 0, 480, 320);
    textMatrix = new Matrix4().setToOrtho2D(0, 0, 480, 320);
    atlas = new TextureAtlas(Gdx.files.internal("data/issue_pack"), Gdx.files.internal("data/"));
    texture = new Texture(Gdx.files.internal("data/resource1.jpg"), true);
    texture.setFilter(TextureFilter.MipMap, TextureFilter.Nearest);
    setTextureFilter(0);
    setModeString();
    sprite = atlas.createSprite("map");
    sprite2 = new Sprite(texture, 0, 0, 855, 480);
    font = new BitmapFont(Gdx.files.internal("data/font.fnt"), Gdx.files.internal("data/font.png"), false);
    Gdx.input.setInputProcessor(new InputAdapter() {

        public boolean touchDown(int x, int y, int pointer, int newParam) {
            mode++;
            if (mode == filters.length * 2)
                mode = 0;
            setTextureFilter(mode / 2);
            setModeString();
            return false;
        }
    });
}
