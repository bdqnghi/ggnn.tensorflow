@Override
public void create() {
    super.create();
    ModelLoader g3djLoader = new G3dModelLoader(new JsonReader());
    model = g3djLoader.loadModel(Gdx.files.internal("data/g3d/btscene1.g3dj"));
    disposables.add(model);
    importer = new MyImporter((btDynamicsWorld) world.collisionWorld);
    importer.loadFile(Gdx.files.internal("data/g3d/btscene1.bullet"));
    camera.position.set(10f, 15f, 20f);
    camera.up.set(0, 1, 0);
    camera.lookAt(-10, 8, 0);
    camera.update();
}
