@Override
public void create() {
    texture = new Texture("data/stones.jpg");
    batch = new SpriteBatch();
    camera = new OrthographicCamera(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    controller = new CameraController();
    gestureDetector = new GestureDetector(20, 0.5f, 2, 0.15f, controller);
    Gdx.input.setInputProcessor(gestureDetector);
}
