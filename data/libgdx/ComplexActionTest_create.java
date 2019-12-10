@Override
public void create() {
    stage = new Stage();
    Action complexAction = forever(sequence(parallel(rotateBy(180, 2), scaleTo(1.4f, 1.4f, 2), alpha(0.7f, 2)), parallel(rotateBy(180, 2), scaleTo(1.0f, 1.0f, 2), alpha(1.0f, 2))));
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"), false);
    texture.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    final Image img1 = new Image(new TextureRegion(texture));
    img1.setSize(100, 100);
    img1.setOrigin(50, 50);
    img1.setPosition(50, 50);
    final Image img2 = new Image(new TextureRegion(texture));
    img2.setSize(50, 50);
    img2.setOrigin(50, 50);
    img2.setPosition(150, 150);
    stage.addActor(img1);
    stage.addActor(img2);
    img1.addAction(complexAction);
// img2.action(complexAction.copy());
}
