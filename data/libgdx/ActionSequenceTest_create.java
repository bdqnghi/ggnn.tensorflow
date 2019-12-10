@Override
public void create() {
    stage = new Stage();
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"), false);
    texture.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    img = new Image(new TextureRegion(texture));
    img.setSize(100, 100);
    img.setOrigin(50, 50);
    img.setPosition(100, 100);
    img2 = new Image(new TextureRegion(texture));
    img2.setSize(100, 100);
    img2.setOrigin(50, 50);
    img2.setPosition(100, 100);
    img3 = new Image(new TextureRegion(texture));
    img3.setSize(100, 100);
    img3.setOrigin(50, 50);
    img3.setPosition(100, 100);
    stage.addActor(img);
    stage.addActor(img2);
    stage.addActor(img3);
    img.addAction(sequence());
    img2.addAction(parallel(sequence(), moveBy(100, 0, 1)));
    img3.addAction(sequence(parallel(moveBy(100, 200, 2)), Actions.run(this)));
}
