@Override
public void create() {
    spriteBatch = new SpriteBatch();
    font = new BitmapFont();
    modelBatch = new ModelBatch();
    DefaultShader.defaultCullFace = GL20.GL_FRONT;
    camera = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    camera.near = 0.5f;
    camera.far = 1000;
    controller = new FirstPersonCameraController(camera);
    Gdx.input.setInputProcessor(controller);
    lights = new Environment();
    lights.set(new ColorAttribute(ColorAttribute.AmbientLight, 0.4f, 0.4f, 0.4f, 1.f));
    lights.add(new DirectionalLight().set(1, 1, 1, 0, -1, 0));
    Texture texture = new Texture(Gdx.files.internal("data/g3d/tiles.png"));
    TextureRegion[][] tiles = TextureRegion.split(texture, 32, 32);
    MathUtils.random.setSeed(0);
    voxelWorld = new VoxelWorld(tiles[0], 20, 4, 20);
    PerlinNoiseGenerator.generateVoxels(voxelWorld, 0, 63, 10);
    float camX = voxelWorld.voxelsX / 2f;
    float camZ = voxelWorld.voxelsZ / 2f;
    float camY = voxelWorld.getHighest(camX, camZ) + 1.5f;
    camera.position.set(camX, camY, camZ);
}
