private void setupUI() {
    ui = new Stage(new ExtendViewport(640, 480));
    Skin skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    skipCleanup = new CheckBox("Skip blend function clean-up", skin);
    skipCleanup.setTransform(false);
    skipCleanup.addListener(listener);
    logLabel = new Label("", skin.get(LabelStyle.class));
    clearEmitters = new TextButton("Clear screen", skin);
    clearEmitters.setTransform(false);
    clearEmitters.addListener(listener);
    Table table = new Table();
    table.setTransform(false);
    table.setFillParent(true);
    table.defaults().padTop(5).left();
    table.top().left().padLeft(5);
    table.add(skipCleanup).row();
    table.add(clearEmitters).row();
    table.add(logLabel);
    ui.addActor(table);
}
