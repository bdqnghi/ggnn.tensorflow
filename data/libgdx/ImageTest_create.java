@Override
public void create() {
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    image2 = new TextureRegion(new Texture(Gdx.files.internal("data/badlogic.jpg")));
    ui = new Stage();
    Gdx.input.setInputProcessor(ui);
    root = new Table();
    root.setSize(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    ui.addActor(root);
    root.debug();
    Image image = new Image(image2);
    image.setScaling(Scaling.fill);
    root.add(image).width(image2.getRegionWidth()).height(image2.getRegionHeight());
}
