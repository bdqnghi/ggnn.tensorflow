@Override
public void create() {
    float w = Gdx.graphics.getWidth();
    float h = Gdx.graphics.getHeight();
    camera = new OrthographicCamera();
    camera.setToOrtho(false, (w / h) * 320, 320);
    camera.update();
    cameraController = new OrthoCamController(camera);
    Gdx.input.setInputProcessor(cameraController);
    font = new BitmapFont();
    batch = new SpriteBatch();
    {
        tiles = new Texture(Gdx.files.internal("data/maps/tiled/tiles.png"));
        TextureRegion[][] splitTiles = TextureRegion.split(tiles, 32, 32);
        map = new TiledMap();
        MapLayers layers = map.getLayers();
        for (int l = 0; l < 20; l++) {
            TiledMapTileLayer layer = new TiledMapTileLayer(150, 100, 32, 32);
            for (int x = 0; x < 150; x++) {
                for (int y = 0; y < 100; y++) {
                    int ty = (int) (Math.random() * splitTiles.length);
                    int tx = (int) (Math.random() * splitTiles[ty].length);
                    Cell cell = new Cell();
                    cell.setTile(new StaticTiledMapTile(splitTiles[ty][tx]));
                    layer.setCell(x, y, cell);
                }
            }
            layers.add(layer);
        }
    }
    renderer = new OrthogonalTiledMapRenderer(map);
}
