@Override
public void create() {
    world = new World(new Vector2(0, -40), true);
    renderer = new Box2DDebugRenderer();
    cam = new OrthographicCamera(28, 20);
    createWorld();
    Gdx.input.setInputProcessor(this);
    batch = new SpriteBatch();
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
}
