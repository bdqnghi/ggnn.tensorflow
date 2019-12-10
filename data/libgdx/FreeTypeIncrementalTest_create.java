public void create() {
    batch = new SpriteBatch();
    shapes = new ShapeRenderer();
    shapes.setColor(Color.RED);
    FreeTypeFontGenerator.setMaxTextureSize(128);
    generator = new FreeTypeFontGenerator(Gdx.files.internal("data/arial.ttf"));
    FreeTypeFontParameter param = new FreeTypeFontParameter();
    param.incremental = true;
    param.size = 24;
    param.characters = "howdY\u0000";
    FreeTypeBitmapFontData data = new FreeTypeBitmapFontData() {

        public int getWrapIndex(Array<Glyph> glyphs, int start) {
            return SimplifiedChinese.getWrapIndex(glyphs, start);
        }
    };
    // By default latin chars are used for x and cap height, causing some fonts to display non-latin chars out of bounds.
    data.xChars = new char[] { '动' };
    data.capChars = new char[] { '动' };
    font = generator.generateFont(param, data);
}
