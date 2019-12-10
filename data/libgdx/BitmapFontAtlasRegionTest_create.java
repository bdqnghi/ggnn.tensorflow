@Override
public void create() {
    this.batch = new SpriteBatch();
    this.assets = new AssetManager();
    BitmapFontParameter params = new BitmapFontParameter();
    params.atlasName = ATLAS;
    this.assets.load(FONT_1, BitmapFont.class, params);
    this.assets.load(FONT_2, BitmapFont.class, params);
    this.assets.load(FONT_3, BitmapFont.class, params);
    this.assets.finishLoading();
    this.fonts = new BitmapFont[3];
    this.fonts[0] = assets.get(FONT_1);
    this.fonts[1] = assets.get(FONT_2);
    this.fonts[2] = assets.get(FONT_3);
    this.fonts[0].setColor(Color.RED);
    this.fonts[1].setColor(Color.BLUE);
    this.fonts[2].setColor(Color.GREEN);
    this.testStrings = new String[] { "I'm loaded from an atlas!", "I, too, am loaded from an atlas", "I'm with stupid ^" };
    Gdx.gl.glClearColor(1, 1, 1, 1);
}
