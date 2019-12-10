@Override
public void create() {
    init();
    environment = new Environment();
    environment.set(new ColorAttribute(ColorAttribute.AmbientLight, 0.3f, 0.3f, 0.3f, 1.f));
    light = shadows ? new DirectionalShadowLight(1024, 1024, 20f, 20f, 1f, 300f) : new DirectionalLight();
    light.set(0.8f, 0.8f, 0.8f, -0.5f, -1f, 0.7f);
    environment.add(light);
    if (shadows)
        environment.shadowMap = (DirectionalShadowLight) light;
    shadowBatch = new ModelBatch(new DepthShaderProvider());
    modelBatch = new ModelBatch();
    world = createWorld();
    world.performanceCounter = performanceCounter;
    final float width = Gdx.graphics.getWidth();
    final float height = Gdx.graphics.getHeight();
    if (width > height)
        camera = new PerspectiveCamera(67f, 3f * width / height, 3f);
    else
        camera = new PerspectiveCamera(67f, 3f, 3f * height / width);
    camera.position.set(10f, 10f, 10f);
    camera.lookAt(0, 0, 0);
    camera.update();
    // Create some simple models
    final Model groundModel = modelBuilder.createRect(20f, 0f, -20f, -20f, 0f, -20f, -20f, 0f, 20f, 20f, 0f, 20f, 0, 1, 0, new Material(ColorAttribute.createDiffuse(Color.WHITE), ColorAttribute.createSpecular(Color.WHITE), FloatAttribute.createShininess(16f)), Usage.Position | Usage.Normal);
    disposables.add(groundModel);
    final Model boxModel = modelBuilder.createBox(1f, 1f, 1f, new Material(ColorAttribute.createDiffuse(Color.WHITE), ColorAttribute.createSpecular(Color.WHITE), FloatAttribute.createShininess(64f)), Usage.Position | Usage.Normal);
    disposables.add(boxModel);
    // Add the constructors
    // mass = 0: static body
    world.addConstructor("ground", new BulletConstructor(groundModel, 0f));
    // mass = 1kg: dynamic body
    world.addConstructor("box", new BulletConstructor(boxModel, 1f));
    // mass = 0: static body
    world.addConstructor("staticbox", new BulletConstructor(boxModel, 0f));
}
