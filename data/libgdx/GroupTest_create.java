public void create() {
    batch = new SpriteBatch();
    font = new BitmapFont();
    renderer = new ShapeRenderer();
    stage = new Stage();
    Gdx.input.setInputProcessor(stage);
    region = new TextureRegion(new Texture(Gdx.files.internal("data/group-debug.png")));
    group2 = new TestGroup("group2");
    group2.setTransform(true);
    stage.addActor(group2);
    group1 = new TestGroup("group1");
    group1.setTransform(true);
    group2.addActor(group1);
}
