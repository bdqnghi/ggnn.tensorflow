@Override
public void create() {
    Gdx.input.setInputProcessor(new InputAdapter() {

        public boolean touchDown(int x, int y, int pointer, int newParam) {
            renderMode = (renderMode + 1) % 6;
            return false;
        }
    });
    spriteBatch = new SpriteBatch();
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"));
    logoSprite = new Sprite(texture);
    logoSprite.setColor(1, 1, 1, 0.6f);
    logoSprite.setBounds(50, 100, 400, 100);
    font = new BitmapFont(Gdx.files.getFileHandle("data/verdana39.fnt", FileType.Internal), Gdx.files.getFileHandle("data/verdana39.png", FileType.Internal), false);
    cache = font.newFontCache();
    layout = new GlyphLayout();
}
