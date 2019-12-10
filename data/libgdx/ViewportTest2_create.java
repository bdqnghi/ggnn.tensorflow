public void create() {
    font = new BitmapFont();
    font.setColor(0, 0, 0, 1);
    Pixmap pixmap = new Pixmap(16, 16, Format.RGBA8888);
    pixmap.setColor(1, 1, 1, 1);
    pixmap.fill();
    texture = new Texture(pixmap);
    batch = new SpriteBatch();
    camera = new OrthographicCamera();
    camera.position.set(100, 100, 0);
    camera.update();
    viewports = ViewportTest1.getViewports(camera);
    viewport = viewports.first();
    names = ViewportTest1.getViewportNames();
    name = names.first();
    Gdx.input.setInputProcessor(new InputAdapter() {

        public boolean keyDown(int keycode) {
            if (keycode == Input.Keys.SPACE) {
                int index = (viewports.indexOf(viewport, true) + 1) % viewports.size;
                name = names.get(index);
                viewport = viewports.get(index);
                resize(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
            }
            return false;
        }
    });
}
