@Override
public void create() {
    super.create();
    environment = new Environment();
    environment.set(new ColorAttribute(ColorAttribute.AmbientLight, 0.1f, 0.1f, 0.1f, 1.f));
    environment.add(dirLight = new DirectionalLight().set(0.8f, 0.8f, 0.8f, -0.5f, -1.0f, -0.8f));
    shaderProvider = new TestShaderProvider();
    shaderBatch = new ModelBatch(shaderProvider);
    cam.position.set(1, 1, 1);
    cam.lookAt(0, 0, 0);
    cam.update();
    showAxes = true;
    onModelClicked("g3d/shapes/teapot.g3dj");
    shaderRoot = (hotLoadFolder != null && Gdx.app.getType() == ApplicationType.Desktop) ? Gdx.files.absolute(hotLoadFolder) : Gdx.files.internal("data/g3d/shaders");
}
