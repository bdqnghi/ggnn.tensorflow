@Override
public void create() {
    Gdx.gl.glClearColor(0.2f, 0.3f, 1.0f, 0.f);
    atlas = new TextureAtlas(Gdx.files.internal("data/testpack"));
    regions = atlas.getRegions();
    modelBatch = new ModelBatch(new DefaultShaderProvider());
    environment = new Environment();
    environment.set(new ColorAttribute(ColorAttribute.AmbientLight, .4f, .4f, .4f, 1f));
    environment.add(new DirectionalLight().set(0.8f, 0.8f, 0.8f, -1f, -0.8f, -0.2f));
    cam = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.position.set(10f, 10f, 10f);
    cam.lookAt(0, 0, 0);
    cam.near = 0.1f;
    cam.far = 300f;
    cam.update();
    ModelBuilder modelBuilder = new ModelBuilder();
    final Material material = new Material(ColorAttribute.createDiffuse(1f, 1f, 1f, 1f), new TextureAttribute(TextureAttribute.Diffuse));
    model = modelBuilder.createBox(5f, 5f, 5f, material, Usage.Position | Usage.Normal | Usage.TextureCoordinates);
    instance = new ModelInstance(model);
    attribute = instance.materials.get(0).get(TextureAttribute.class, TextureAttribute.Diffuse);
    Gdx.input.setInputProcessor(new InputMultiplexer(this, inputController = new CameraInputController(cam)));
}
