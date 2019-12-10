@Override
public void create() {
    texture = new Texture(Gdx.files.internal("data/black_marked_0.png"));
    region = new TextureRegion(texture);
    batch = new SpriteBatch();
    batch.getTransformMatrix().setToTranslation(30.5f, 30.5f, 0);
}
