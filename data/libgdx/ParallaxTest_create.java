@Override
public void create() {
    Texture texture = new Texture(Gdx.files.internal("data/layers.png"));
    layers = new TextureRegion[3];
    layers[0] = new TextureRegion(texture, 0, 0, 542, 363);
    layers[1] = new TextureRegion(texture, 0, 363, 1024, 149);
    layers[2] = new TextureRegion(texture, 547, 0, 224, 51);
    camera = new ParallaxCamera(480, 320);
    controller = new OrthoCamController(camera);
    Gdx.input.setInputProcessor(controller);
    batch = new SpriteBatch();
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
}
