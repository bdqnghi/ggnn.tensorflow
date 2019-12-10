@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    Gdx.gl.glEnable(GL20.GL_BLEND);
    Gdx.gl.glBlendFunc(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
    renderer.begin(ShapeType.Line);
    renderer.setColor(1, 0, 0, 0.5f);
    renderer.rect(0, 0, 100, 200);
    renderer.end();
    renderer.begin(ShapeType.Filled);
    renderer.setColor(0, 1, 0, 0.5f);
    renderer.rect(200, 0, 100, 100);
    renderer.end();
    renderer.begin(ShapeType.Line);
    renderer.setColor(0, 1, 0, 0.5f);
    renderer.circle(400, 50, 50);
    renderer.end();
    renderer.begin(ShapeType.Filled);
    renderer.setColor(1, 0, 1, 0.5f);
    renderer.circle(500, 50, 50);
    renderer.end();
}
