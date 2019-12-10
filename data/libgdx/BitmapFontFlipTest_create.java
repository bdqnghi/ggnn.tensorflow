@Override
public void create() {
    Gdx.input.setInputProcessor(new InputAdapter() {

        public boolean touchDown(int x, int y, int pointer, int newParam) {
            renderMode = (renderMode + 1) % 4;
            return false;
        }
    });
    spriteBatch = new SpriteBatch();
    spriteBatch.setProjectionMatrix(new Matrix4().setToOrtho(0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight(), 0, 0, 1));
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"));
    logoSprite = new Sprite(texture);
    logoSprite.flip(false, true);
    logoSprite.setPosition(0, 320 - 256);
    logoSprite.setColor(1, 1, 1, 0.5f);
    font = new BitmapFont(Gdx.files.internal("data/verdana39.fnt"), Gdx.files.internal("data/verdana39.png"), true);
    cache1 = font.newFontCache();
    cache2 = font.newFontCache();
    cache3 = font.newFontCache();
    cache4 = font.newFontCache();
    cache5 = font.newFontCache();
    createCaches("cached", cache1, cache2, cache3, cache4, cache5);
    font.getData().setScale(1.33f);
    cacheScaled1 = font.newFontCache();
    cacheScaled2 = font.newFontCache();
    cacheScaled3 = font.newFontCache();
    cacheScaled4 = font.newFontCache();
    cacheScaled5 = font.newFontCache();
    createCaches("cache scaled", cacheScaled1, cacheScaled2, cacheScaled3, cacheScaled4, cacheScaled5);
}
