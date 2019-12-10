@Override
public void create() {
    Gdx.app.log("Multitouch", "multitouch supported: " + Gdx.input.isPeripheralAvailable(Peripheral.MultitouchScreen));
    renderer = new ShapeRenderer();
    camera = new OrthographicCamera(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    camera.position.set(Gdx.graphics.getWidth() / 2.0f, Gdx.graphics.getHeight() / 2.0f, 0);
    Gdx.input.setInputProcessor(this);
}
