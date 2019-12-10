@Override
public void create() {
    batch = new SpriteBatch();
    renderer = new ShapeRenderer();
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    skin.getAtlas().getTextures().iterator().next().setFilter(TextureFilter.Nearest, TextureFilter.Nearest);
    skin.getFont("default-font").getData().markupEnabled = true;
    float scale = 1;
    skin.getFont("default-font").getData().setScale(scale);
    stage = new Stage(new ScreenViewport());
    Gdx.input.setInputProcessor(stage);
    Table table = new Table();
    stage.addActor(table);
    table.setPosition(200, 65);
    table.debug();
    table.add(new Label("This is regular text.", skin));
    table.row();
    table.add(new Label("This is regular text\nwith a newline.", skin));
    table.row();
    Label label3 = new Label("This is [RED]regular text\n\nwith newlines,\naligned bottom, right.", skin);
    label3.setColor(Color.GREEN);
    label3.setAlignment(Align.bottom | Align.right);
    table.add(label3).minWidth(200 * scale).minHeight(110 * scale).fill();
    table.row();
    Label label4 = new Label("This is regular text with NO newlines, wrap enabled and aligned bottom, right.", skin);
    label4.setWrap(true);
    label4.setAlignment(Align.bottom | Align.right);
    table.add(label4).minWidth(200 * scale).minHeight(110 * scale).fill();
    table.row();
    Label label5 = new Label("This is regular text with\n\nnewlines, wrap\nenabled and aligned bottom, right.", skin);
    label5.setWrap(true);
    label5.setAlignment(Align.bottom | Align.right);
    table.add(label5).minWidth(200 * scale).minHeight(110 * scale).fill();
    table.pack();
}
