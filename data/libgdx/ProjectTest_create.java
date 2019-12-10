@Override
public void create() {
    ObjLoader objLoader = new ObjLoader();
    sphere = objLoader.loadModel(Gdx.files.internal("data/sphere.obj"));
    sphere.materials.get(0).set(new ColorAttribute(ColorAttribute.Diffuse, Color.WHITE));
    cam = new PerspectiveCamera(45, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.far = 200;
    Random rand = new Random();
    for (int i = 0; i < instances.length; i++) {
        instances[i] = new ModelInstance(sphere, rand.nextFloat() * 100 - rand.nextFloat() * 100, rand.nextFloat() * 100 - rand.nextFloat() * 100, rand.nextFloat() * -100 - 3);
    }
    batch = new SpriteBatch();
    font = new BitmapFont();
    logo = new TextureRegion(new Texture(Gdx.files.internal("data/badlogicsmall.jpg")));
    modelBatch = new ModelBatch();
}
