@Override
public void create() {
    float w = Gdx.graphics.getWidth();
    float h = Gdx.graphics.getHeight();
    camera = new OrthographicCamera();
    camera.setToOrtho(false, (w / h) * 10, 10);
    camera.update();
    cameraController = new OrthoCamController(camera);
    Gdx.input.setInputProcessor(cameraController);
    font = new BitmapFont();
    batch = new SpriteBatch();
    map = new TmxMapLoader().load("data/maps/tiled/super-koalio/level1.tmx");
    renderer = new OrthogonalTiledMapRenderer(map, 1f / 32f);
}
