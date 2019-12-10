@Override
public void create() {
    float w = Gdx.graphics.getWidth();
    float h = Gdx.graphics.getHeight();
    camera = new OrthographicCamera();
    camera.setToOrtho(false, (w / h) * 10, 10);
    camera.zoom = 2;
    camera.update();
    cameraController = new OrthoCamController(camera);
    Gdx.input.setInputProcessor(cameraController);
    font = new BitmapFont();
    batch = new SpriteBatch();
    assetManager = new AssetManager();
    assetManager.setLoader(TiledMap.class, new TmxMapLoader(new InternalFileHandleResolver()));
    assetManager.load("data/maps/tiled/isometric_grass_and_water.tmx", TiledMap.class);
    assetManager.finishLoading();
    map = assetManager.get("data/maps/tiled/isometric_grass_and_water.tmx");
    renderer = new IsometricTiledMapRenderer(map, 1f / 64f);
}
