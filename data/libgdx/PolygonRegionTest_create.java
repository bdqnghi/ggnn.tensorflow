@Override
public void create() {
    texture = new Texture(Gdx.files.internal("data/tree.png"));
    PolygonRegionLoader loader = new PolygonRegionLoader();
    region = loader.load(new TextureRegion(texture), Gdx.files.internal("data/tree.psh"));
    // create a region from an arbitrary set of vertices (a triangle in this case)
    region2 = new PolygonRegion(new TextureRegion(texture), new float[] { 0, 0, 100, 100, 0, 100 }, new short[] { 0, 1, 2 });
    camera = new OrthographicCamera(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    camera.position.x = 0;
    camera.position.y = 0;
    batch = new PolygonSpriteBatch();
    debugRenderer = new PolygonRegionDebugRenderer();
    Gdx.input.setInputProcessor(this);
}
