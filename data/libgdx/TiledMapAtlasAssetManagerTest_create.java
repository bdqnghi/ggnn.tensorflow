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
    AtlasTiledMapLoaderParameters params = new AtlasTiledMapLoaderParameters();
    params.forceTextureFilters = true;
    params.textureMinFilter = TextureFilter.Linear;
    params.textureMagFilter = TextureFilter.Linear;
    assetManager = new AssetManager();
    assetManager.setErrorListener(new AssetErrorListener() {

        @Override
        public void error(AssetDescriptor asset, Throwable throwable) {
            errorMessage = throwable.getMessage();
        }
    });
    assetManager.setLoader(TiledMap.class, new AtlasTmxMapLoader(new InternalFileHandleResolver()));
    assetManager.load(fileName, TiledMap.class);
}
