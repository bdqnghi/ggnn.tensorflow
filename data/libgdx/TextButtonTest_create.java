@Override
public void create() {
    stage = new Stage();
    Gdx.input.setInputProcessor(stage);
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    for (int i = 0; i < 1; i++) {
        TextButton t = new TextButton("Button" + i, skin);
        t.setX(MathUtils.random(0, Gdx.graphics.getWidth()));
        t.setY(MathUtils.random(0, Gdx.graphics.getHeight()));
        t.setWidth(MathUtils.random(50, 200));
        t.setHeight(MathUtils.random(0, 100));
        stage.addActor(t);
    }
}
