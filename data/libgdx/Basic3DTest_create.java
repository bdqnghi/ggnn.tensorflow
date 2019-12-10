@Override
public void create() {
    modelBatch = new ModelBatch(new DefaultShaderProvider());
    environment = new Environment();
    environment.set(new ColorAttribute(ColorAttribute.AmbientLight, .4f, .4f, .4f, 1f));
    environment.add(new DirectionalLight().set(0.8f, 0.8f, 0.8f, -1f, -0.8f, -0.2f));
    cam = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.position.set(10f, 10f, 10f);
    cam.lookAt(0, 0, 0);
    cam.near = 1f;
    cam.far = 30f;
    cam.update();
    ModelBuilder modelBuilder = new ModelBuilder();
    model = modelBuilder.createBox(5f, 5f, 5f, new Material(ColorAttribute.createDiffuse(Color.GREEN)), Usage.Position | Usage.Normal);
    instance = new ModelInstance(model);
    Gdx.input.setInputProcessor(new InputMultiplexer(this, inputController = new CameraInputController(cam)));
}
