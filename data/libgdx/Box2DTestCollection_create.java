@Override
public void create() {
    if (this.app == null) {
        this.app = Gdx.app;
        Box2DTest test = tests[testIndex];
        test.create();
    }
    InputMultiplexer multiplexer = new InputMultiplexer();
    multiplexer.addProcessor(this);
    multiplexer.addProcessor(new GestureDetector(this));
    Gdx.input.setInputProcessor(multiplexer);
}
