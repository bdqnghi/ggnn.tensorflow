private void setupUI() {
    Skin skin = assets.get(DEFAULT_SKIN);
    Table table = new Table();
    table.setFillParent(true);
    table.top().left().add(new Label("FPS ", skin)).left();
    table.add(fpsLabel = new Label("", skin)).left().expandX().row();
    ui.addActor(table);
}
