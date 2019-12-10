@Override
public void render() {
    Gdx.gl.glClearColor(0.7f, 0.7f, 0.7f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    cam.update();
    Gdx.gl.glEnable(GL20.GL_BLEND);
    Gdx.gl.glBlendFunc(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
    for (int i = 0; i < LAYERS; i++) {
        SpriteCache cache = caches[i];
        cache.setProjectionMatrix(cam.combined);
        cache.begin();
        cache.draw(layers[i]);
        cache.end();
    }
    renderer.setProjectionMatrix(cam.combined);
    renderer.begin(ShapeType.Line);
    renderer.setColor(1, 0, 0, 1);
    renderer.line(0, 0, 500, 0);
    renderer.line(0, 0, 0, 500);
    renderer.setColor(0, 0, 1, 1);
    renderer.line(0, BOUND_Y, BOUND_X, BOUND_Y);
    renderer.setColor(0, 0, 1, 1);
    renderer.line(BOUND_X, 0, BOUND_X, BOUND_Y);
    renderer.end();
}
