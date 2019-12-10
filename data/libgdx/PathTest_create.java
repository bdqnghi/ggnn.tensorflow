@Override
public void create() {
    renderer = new ImmediateModeRenderer20(false, false, 0);
    spriteBatch = new SpriteBatch();
    obj = new Sprite(new Texture(Gdx.files.internal("data/badlogicsmall.jpg")));
    obj.setSize(40, 40);
    obj.setOriginCenter();
    obj2 = new Sprite(new Texture(Gdx.files.internal("data/bobrgb888-32x32.png")));
    obj2.setSize(40, 40);
    obj2.setOriginCenter();
    // 96DP
    ZIGZAG_SCALE = Gdx.graphics.getDensity() * 96;
    float w = Gdx.graphics.getWidth() - obj.getWidth();
    float h = Gdx.graphics.getHeight() - obj.getHeight();
    paths.add(new Bezier<Vector2>(new Vector2(0, 0), new Vector2(w, h)));
    paths.add(new Bezier<Vector2>(new Vector2(0, 0), new Vector2(0, h), new Vector2(w, h)));
    paths.add(new Bezier<Vector2>(new Vector2(0, 0), new Vector2(w, 0), new Vector2(0, h), new Vector2(w, h)));
    Vector2[] cp = new Vector2[] { new Vector2(0, 0), new Vector2(w * 0.25f, h * 0.5f), new Vector2(0, h), new Vector2(w * 0.5f, h * 0.75f), new Vector2(w, h), new Vector2(w * 0.75f, h * 0.5f), new Vector2(w, 0), new Vector2(w * 0.5f, h * 0.25f) };
    paths.add(new BSpline<Vector2>(cp, 3, true));
    paths.add(new CatmullRomSpline<Vector2>(cp, true));
    pathLength = paths.get(currentPath).approxLength(500);
    avg_speed = speed * pathLength;
    Gdx.input.setInputProcessor(this);
}
