@Override
public void create() {
    spriteBatch = new SpriteBatch();
    // font = new BitmapFont(Gdx.files.internal("data/verdana39.fnt"), false);
    font = new BitmapFont(Gdx.files.internal("data/arial-32-pad.fnt"), false);
    // font = new FreeTypeFontGenerator(Gdx.files.internal("data/arial.ttf")).generateFont(new FreeTypeFontParameter());
    font.getData().markupEnabled = true;
    font.getData().breakChars = new char[] { '-' };
    multiPageFont = new BitmapFont(Gdx.files.internal("data/multipagefont.fnt"));
    // Add user defined color
    Colors.put("PERU", Color.valueOf("CD853F"));
    renderer = new ShapeRenderer();
    renderer.setProjectionMatrix(spriteBatch.getProjectionMatrix());
    stage = new Stage(new ScreenViewport());
    Skin skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    BitmapFont labelFont = skin.get("default-font", BitmapFont.class);
    labelFont.getData().markupEnabled = true;
    // Notice that the last [] has been deliberately added to test the effect of excessive pop operations.
    // They are silently ignored, as expected.
    label = new Label("<<[BLUE]M[RED]u[YELLOW]l[GREEN]t[OLIVE]ic[]o[]l[]o[]r[]*[MAROON]Label[][] [Unknown Color]>>", skin);
    label.setPosition(100, 200);
    stage.addActor(label);
    Window window = new Window("[RED]Multicolor[GREEN] Title", skin);
    window.setPosition(400, 300);
    window.pack();
    stage.addActor(window);
    layout = new GlyphLayout();
}
