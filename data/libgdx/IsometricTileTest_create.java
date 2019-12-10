@Override
public void create() {
    cam = new OrthographicCamera(480, 320);
    camController = new OrthoCamController(cam);
    Gdx.input.setInputProcessor(camController);
    renderer = new ShapeRenderer();
    texture = new Texture(Gdx.files.internal("data/isotile.png"));
    Random rand = new Random();
    for (int i = 0; i < LAYERS; i++) {
        caches[i] = new SpriteCache();
        SpriteCache cache = caches[i];
        cache.beginCache();
        int colX = HEIGHT * TILE_WIDTH / 2 - TILE_WIDTH / 2;
        int colY = BOUND_Y - TILE_HEIGHT_DIAMOND;
        for (int x = 0; x < WIDTH; x++) {
            for (int y = 0; y < HEIGHT; y++) {
                int tileX = colX - y * TILE_WIDTH / 2;
                int tileY = colY - y * TILE_HEIGHT_DIAMOND / 2;
                cache.add(texture, tileX, tileY, rand.nextInt(2) * 54, 0, TILE_WIDTH, TILE_HEIGHT);
            }
            colX += TILE_WIDTH / 2;
            colY -= TILE_HEIGHT_DIAMOND / 2;
        }
        layers[i] = cache.endCache();
    }
}
