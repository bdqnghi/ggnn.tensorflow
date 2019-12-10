public void create() {
    Batch batch = new CpuSpriteBatch();
    // batch = new SpriteBatch();
    stage = new Stage(new ExtendViewport(500, 500), batch);
    Gdx.input.setInputProcessor(stage);
    texture = new Texture("data/bobargb8888-32x32.png");
    texture.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    TextureRegionDrawable drawable = new TextureRegionDrawable(new TextureRegion(texture));
    for (int i = 0; i < NUM_GROUPS; i++) {
        Group group = createActorGroup(drawable);
        stage.addActor(group);
    }
}
