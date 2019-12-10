@Override
public void create() {
    texture = new Texture(Gdx.files.internal("data/badlogicsmall.jpg"));
    stage = new Stage();
    for (int i = 0; i < 100; i++) {
        Image img = new Image(new TextureRegion(texture));
        img.setX((float) Math.random() * 480);
        img.setY((float) Math.random() * 320);
        img.getColor().a = (float) Math.random() * 0.5f + 0.5f;
        stage.addActor(img);
    }
    stage.getRoot().addAction(forever(sequence(fadeOut(3), fadeIn(3))));
}
