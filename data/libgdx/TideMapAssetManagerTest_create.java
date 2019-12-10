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
    assetManager.setLoader(TiledMap.class, new TideMapLoader(new InternalFileHandleResolver()));
    assetManager.load("data/maps/tide/Map01.tide", TiledMap.class);
    assetManager.finishLoading();
    map = assetManager.get("data/maps/tide/Map01.tide");
    renderer = new OrthogonalTiledMapRenderer(map, 1f / 32f);
}
