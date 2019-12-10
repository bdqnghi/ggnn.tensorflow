@Override
public void create() {
    region = new TextureRegion(new Texture("data/badlogicsmall.jpg"));
    batch = new SpriteBatch();
    renderer = new ShapeRenderer();
    renderer.setProjectionMatrix(batch.getProjectionMatrix());
}
