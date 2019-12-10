@Override
public void create() {
    if (assets == null)
        assets = new AssetManager();
    modelBatch = new ModelBatch();
    cam = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.position.set(10f, 10f, 10f);
    cam.lookAt(0, 0, 0);
    cam.near = 0.1f;
    cam.far = 1000f;
    cam.update();
    createAxes();
    Gdx.input.setInputProcessor(inputController = new CameraInputController(cam));
}
