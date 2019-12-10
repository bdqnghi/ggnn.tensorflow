@Override
public void create() {
    camera = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    camera.position.set(0, 0, 5);
    camera.near = 1;
    camera.far = 100;
    camera.update();
    assets = new AssetManager();
    assets.load("data/g3d/cube.g3dj", Model.class);
    spriteBatch = new SpriteBatch();
    modelBatch = new ModelBatch();
// assets.getLogger().setLevel(Logger.DEBUG);
}
