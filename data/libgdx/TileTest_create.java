@Override
public void create() {
    cam = new OrthographicCamera(480, 320);
    cam.position.set(WIDTH * 32 / 2, HEIGHT * 32 / 2, 0);
    camController = new OrthoCamController(cam);
    Gdx.input.setInputProcessor(camController);
    texture = new Texture(Gdx.files.internal("data/tiles.png"));
    Random rand = new Random();
    for (int i = 0; i < LAYERS; i++) {
        caches[i] = new SpriteCache();
        SpriteCache cache = caches[i];
        cache.beginCache();
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                int tileX = rand.nextInt(5);
                int tileY = rand.nextInt(5);
                cache.add(texture, x << 5, y << 5, 1 + tileX * 33, 1 + tileY * 33, 32, 32);
            }
        }
        layers[i] = cache.endCache();
    }
}
