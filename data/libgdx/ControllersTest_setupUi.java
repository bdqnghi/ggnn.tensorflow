private void setupUi() {
    // setup a tiny ui with a console and a clear button.
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    stage = new Stage();
    ui = new Table();
    ui.setSize(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    console = new List(skin);
    scrollPane = new ScrollPane(console);
    scrollPane.setScrollbarsOnTop(true);
    TextButton clear = new TextButton("Clear", skin);
    ui.add(scrollPane).expand(true, true).fill();
    ui.row();
    ui.add(clear).expand(true, false).fill();
    stage.addActor(ui);
    clear.addListener(new ClickListener() {

        @Override
        public void clicked(InputEvent event, float x, float y) {
            clear();
        }
    });
    Gdx.input.setInputProcessor(stage);
}
