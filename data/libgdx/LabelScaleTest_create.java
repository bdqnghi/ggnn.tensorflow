@Override
public void create() {
    batch = new SpriteBatch();
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    stage = new Stage();
    Gdx.input.setInputProcessor(stage);
    Table table = new Table();
    stage.addActor(table);
    table.setPosition(200, 65);
    Label label1 = new Label("This text is scaled 2x.", skin);
    label1.setFontScale(2);
    Label label2 = new Label("This text is scaled. This text is scaled. This text is scaled. This text is scaled. This text is scaled. ", skin);
    label2.setWrap(true);
    label2.setFontScale(0.75f, 0.75f);
    table.debug();
    table.add(label1);
    table.row();
    table.add(label2).fill();
    table.pack();
}
