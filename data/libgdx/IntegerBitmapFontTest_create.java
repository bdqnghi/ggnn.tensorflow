public void create() {
    TextureAtlas textureAtlas = new TextureAtlas("data/pack");
    font = new BitmapFont(Gdx.files.internal("data/verdana39.fnt"), textureAtlas.findRegion("verdana39"), false);
    singleLineCache = new BitmapFontCache(font, true);
    multiLineCache = new BitmapFontCache(font, true);
    singleLineCacheNonInteger = new BitmapFontCache(font, false);
    multiLineCacheNonInteger = new BitmapFontCache(font, false);
    batch = new SpriteBatch();
    fillCaches();
}
