@Override
public void create() {
    float w = Gdx.graphics.getWidth();
    float h = Gdx.graphics.getHeight();
    camera = new OrthographicCamera();
    camera.setToOrtho(false, (w / h) * 10, 10);
    camera.position.set(10.0f, 2.5f, 0.0f);
    camera.update();
    cameraController = new OrthoCamController(camera);
    Gdx.input.setInputProcessor(cameraController);
    font = new BitmapFont();
    batch = new SpriteBatch();
    // These two maps should appear identical -- a ring of grass with water inside and out.
    // The original is correct, without the bug fix to TiledMapTileSets.java that acompanies
    // this test, the latter appears as all grass.
    // map = new TmxMapLoader().load("data/maps/tiled/external-tilesets/test_original.tmx");
    map = new TmxMapLoader().load("data/maps/tiled/external-tilesets/test_extended.tmx");
    renderer = new IsometricTiledMapRenderer(map, 1f / 32f);
}
