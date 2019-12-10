public void create() {
    stage = new Stage();
    Gdx.input.setInputProcessor(stage);
    root = new Table();
    root.setFillParent(true);
    stage.addActor(root);
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    Table labels = new Table();
    root.add(new ScrollPane(labels, skin)).expand().fill();
    root.row();
    root.add(drawnLabel = new Label("", skin));
    for (int i = 0; i < count; i++) {
        labels.add(new Label("Label: " + i, skin) {

            public void draw(Batch batch, float parentAlpha) {
                super.draw(batch, parentAlpha);
                drawn++;
            }
        });
        labels.row();
    }
}
