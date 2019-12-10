@Override
public void create() {
    Gdx.app.setLogLevel(Application.LOG_DEBUG);
    Gdx.app.log("GdxTestGwt", "Setting up for " + tests.length + " tests.");
    ui = new Stage();
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
    container = new Table();
    ui.addActor(container);
    container.debug();
    Table table = new Table();
    ScrollPane scroll = new ScrollPane(table);
    container.add(scroll).expand().fill();
    table.pad(10).defaults().expandX().space(4);
    for (final Instancer instancer : tests) {
        table.row();
        TextButton button = new TextButton(instancer.instance().getClass().getName(), skin);
        button.addListener(new ClickListener() {

            @Override
            public void clicked(InputEvent event, float x, float y) {
                ((InputWrapper) Gdx.input).multiplexer.removeProcessor(ui);
                test = instancer.instance();
                Gdx.app.log("GdxTestGwt", "Clicked on " + test.getClass().getName());
                test.create();
                test.resize(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
            }
        });
        table.add(button).expandX().fillX();
    }
    container.row();
    container.add(new Label("Click on a test to start it, press ESC to close it.", new LabelStyle(font, Color.WHITE))).pad(5, 5, 5, 5);
    Gdx.input = new InputWrapper(Gdx.input) {

        @Override
        public boolean keyUp(int keycode) {
            if (keycode == Keys.ESCAPE) {
                if (test != null) {
                    Gdx.app.log("GdxTestGwt", "Exiting current test.");
                    dispose = true;
                }
            }
            return false;
        }

        @Override
        public boolean touchDown(int screenX, int screenY, int pointer, int button) {
            if (screenX < Gdx.graphics.getWidth() / 10.0 && screenY < Gdx.graphics.getHeight() / 10.0) {
                if (test != null) {
                    dispose = true;
                }
            }
            return false;
        }
    };
    ((InputWrapper) Gdx.input).multiplexer.addProcessor(ui);
    Gdx.app.log("GdxTestGwt", "Test picker UI setup complete.");
}
