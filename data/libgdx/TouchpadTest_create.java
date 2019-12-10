public void create() {
    stage = new Stage();
    Gdx.input.setInputProcessor(stage);
    Skin skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    touchpad = new Touchpad(20, skin);
    touchpad.setBounds(15, 15, 100, 100);
    stage.addActor(touchpad);
}
