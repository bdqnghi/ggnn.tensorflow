@Override
public void create() {
    ModelBuilder builder = new ModelBuilder();
    sphere = builder.createSphere(2f, 2f, 2f, 16, 16, new Material(new ColorAttribute(ColorAttribute.Diffuse, Color.WHITE)), Usage.Position | Usage.Normal);
    // cam = new PerspectiveCamera(45, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam = new OrthographicCamera(45, 45 * (Gdx.graphics.getWidth() / (float) Gdx.graphics.getHeight()));
    cam.near = 1;
    cam.far = 200;
    Random rand = new Random();
    for (int i = 0; i < instances.length; i++) {
        pos.set(rand.nextFloat() * 100 - rand.nextFloat() * 100, rand.nextFloat() * 100 - rand.nextFloat() * 100, rand.nextFloat() * -100 - 3);
        instances[i] = new ModelInstance(sphere, pos);
    }
    modelBatch = new ModelBatch();
    batch = new SpriteBatch();
    font = new BitmapFont();
// Gdx.graphics.setVSync(true);
// Gdx.app.log("CullTest", "" + Gdx.graphics.getBufferFormat().toString());
}
