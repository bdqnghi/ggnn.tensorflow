@Override
public void create() {
    float w = Gdx.graphics.getWidth();
    float h = Gdx.graphics.getHeight();
    camera = new OrthographicCamera();
    camera.setToOrtho(false, (w / h) * 100, 100);
    camera.zoom = 2;
    camera.update();
    cameraController = new OrthoCamController(camera);
    Gdx.input.setInputProcessor(cameraController);
    font = new BitmapFont();
    batch = new SpriteBatch();
    map = new TmxMapLoader().load("data/maps/tiled-objects/test-load-mapobjects.tmx");
    MapProperties properties = map.getProperties();
    shapeRenderer = new ShapeRenderer();
}
