public void create() {
    stage = new Stage();
    Gdx.input.setInputProcessor(stage);
    texture = new Texture("data/group-debug.png");
    Image image = new Image(texture);
    image.setScaling(Scaling.fit);
    image.setBounds(100, 100, 400, 200);
    stage.addActor(image);
    Image image2 = new Image(texture);
    image2.setScaling(Scaling.fit);
    image.setBounds(100, 100, 400, 200);
    image2.setOrigin(200, 100);
    image2.setScale(0.5f);
    stage.addActor(image2);
}
