@Override
public void create() {
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"), true);
    texture.setFilter(TextureFilter.MipMap, TextureFilter.Linear);
    ObjLoader objLoader = new ObjLoader();
    mesh = objLoader.loadModel(Gdx.files.internal("data/cube.obj"));
    mesh.materials.get(0).set(new TextureAttribute(TextureAttribute.Diffuse, texture));
    modelInstance = new ModelInstance(mesh);
    modelBatch = new ModelBatch();
    cam = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.position.set(3, 3, 3);
    cam.direction.set(-1, -1, -1);
    batch = new SpriteBatch();
    font = new BitmapFont();
}
