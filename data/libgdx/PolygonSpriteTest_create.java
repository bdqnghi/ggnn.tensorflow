@Override
public void create() {
    texture = new Texture(Gdx.files.internal("data/tree.png"));
    PolygonRegionLoader loader = new PolygonRegionLoader();
    region = loader.load(new TextureRegion(texture), Gdx.files.internal("data/tree.psh"));
    renderer = new ShapeRenderer();
    camera = new OrthographicCamera(480, 320);
    camera.position.x = 240;
    camera.position.y = 160;
    camera.update();
    batch = new PolygonSpriteBatch();
    for (int i = 0; i < 50; i++) {
        PolygonSprite sprite = new PolygonSprite(region);
        sprite.setPosition(MathUtils.random(-30, 440), MathUtils.random(-30, 290));
        sprite.setColor(MathUtils.random(), MathUtils.random(), MathUtils.random(), 1.0f);
        sprite.setScale(MathUtils.random(0.5f, 1.5f), MathUtils.random(0.5f, 1.5f));
        sprites.add(sprite);
    }
}
