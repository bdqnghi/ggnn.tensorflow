@Override
public void create() {
    // setup the camera. In Box2D we operate on a
    // meter scale, pixels won't do it. So we use
    // an orthographic camera with a viewport of
    // 48 meters in width and 32 meters in height.
    // We also position the camera so that it
    // looks at (0,16) (that's where the middle of the
    // screen will be located).
    camera = new OrthographicCamera(48, 32);
    camera.position.set(0, 16, 0);
    // next we setup the immediate mode renderer
    renderer = new ShapeRenderer();
    // next we create the box2d debug renderer
    debugRenderer = new Box2DDebugRenderer();
    // next we create a SpriteBatch and a font
    batch = new SpriteBatch();
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
    font.setColor(Color.RED);
    textureRegion = new TextureRegion(new Texture(Gdx.files.internal("data/badlogicsmall.jpg")));
    // next we create out physics world.
    createPhysicsWorld();
    // register ourselfs as an InputProcessor
    Gdx.input.setInputProcessor(this);
}
