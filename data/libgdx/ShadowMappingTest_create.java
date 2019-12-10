@Override
public void create() {
    modelBatch = new ModelBatch();
    environment = new Environment();
    environment.set(new ColorAttribute(ColorAttribute.AmbientLight, .4f, .4f, .4f, 1f));
    environment.add((shadowLight = new DirectionalShadowLight(1024, 1024, 30f, 30f, 1f, 100f)).set(0.8f, 0.8f, 0.8f, -1f, -.8f, -.2f));
    environment.shadowMap = shadowLight;
    cam = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.position.set(0f, 7f, 10f);
    cam.lookAt(0, 0, 0);
    cam.near = 1f;
    cam.far = 50f;
    cam.update();
    ModelBuilder modelBuilder = new ModelBuilder();
    modelBuilder.begin();
    MeshPartBuilder mpb = modelBuilder.part("parts", GL20.GL_TRIANGLES, Usage.Position | Usage.Normal | Usage.ColorUnpacked, new Material(ColorAttribute.createDiffuse(Color.WHITE)));
    mpb.setColor(1f, 1f, 1f, 1f);
    mpb.box(0, -1.5f, 0, 10, 1, 10);
    mpb.setColor(1f, 0f, 1f, 1f);
    mpb.sphere(2f, 2f, 2f, 10, 10);
    model = modelBuilder.end();
    instance = new ModelInstance(model);
    shadowBatch = new ModelBatch(new DepthShaderProvider());
    Gdx.input.setInputProcessor(camController = new CameraInputController(cam));
}
