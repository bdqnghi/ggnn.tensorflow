public void create() {
    stage = new Stage();
    Gdx.input.setInputProcessor(stage);
    Skin skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    Label nameLabel = new Label("Name:", skin);
    TextField nameText = new TextField("", skin);
    Label addressLabel = new Label("Address:", skin);
    TextField addressText = new TextField("", skin);
    Table table = new Table();
    stage.addActor(table);
    table.setSize(260, 195);
    table.setPosition(190, 142);
    // table.align(Align.right | Align.bottom);
    table.debug();
    TextureRegion upRegion = skin.getRegion("default-slider-knob");
    TextureRegion downRegion = skin.getRegion("default-slider-knob");
    BitmapFont buttonFont = skin.getFont("default-font");
    TextButton button = new TextButton("Button 1", skin);
    button.addListener(new InputListener() {

        public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
            System.out.println("touchDown 1");
            return false;
        }
    });
    table.add(button);
    // table.setTouchable(Touchable.disabled);
    Table table2 = new Table();
    stage.addActor(table2);
    table2.setFillParent(true);
    table2.bottom();
    TextButton button2 = new TextButton("Button 2", skin);
    button2.addListener(new ChangeListener() {

        public void changed(ChangeEvent event, Actor actor) {
            System.out.println("2!");
        }
    });
    button2.addListener(new InputListener() {

        public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
            System.out.println("touchDown 2");
            return false;
        }
    });
    table2.add(button2);
}
