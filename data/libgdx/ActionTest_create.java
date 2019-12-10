@Override
public void create() {
    stage = new Stage();
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"), false);
    texture.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    final Image img = new Image(new TextureRegion(texture));
    img.setSize(100, 100);
    img.setOrigin(50, 50);
    img.setPosition(100, 100);
    // img.addAction(forever(sequence(delay(1.0f), new Action() {
    // public boolean act (float delta) {
    // System.out.println(1);
    // img.clearActions();
    // return true;
    // }
    // })));
    img.addAction(Actions.moveBy(100, 0, 2));
    img.addAction(Actions.after(Actions.scaleTo(2, 2, 2)));
    stage.addActor(img);
}
