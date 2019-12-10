public void create() {
    renderer = new ShapeRenderer();
    cam = new PerspectiveCamera(47, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.position.set(0, 0, 2);
    cam.near = 0.1f;
    controller = new PerspectiveCamController(cam);
    Gdx.input.setInputProcessor(controller);
    batch = new SpriteBatch();
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
}
