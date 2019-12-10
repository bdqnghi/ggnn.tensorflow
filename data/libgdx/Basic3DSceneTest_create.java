@Override
public void create() {
    modelBatch = new ModelBatch();
    lights = new Environment();
    lights = new Environment();
    lights.set(new ColorAttribute(ColorAttribute.AmbientLight, 0.4f, 0.4f, 0.4f, 1.f));
    lights.add(new DirectionalLight().set(0.8f, 0.8f, 0.8f, -1f, -0.8f, -0.2f));
    cam = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.position.set(0f, 7f, 10f);
    cam.lookAt(0, 0, 0);
    cam.near = 0.1f;
    cam.far = 300f;
    cam.update();
    camController = new CameraInputController(cam);
    Gdx.input.setInputProcessor(camController);
    assets = new AssetManager();
    assets.load("data/g3d/invaders.g3dj", Model.class);
    loading = true;
}
