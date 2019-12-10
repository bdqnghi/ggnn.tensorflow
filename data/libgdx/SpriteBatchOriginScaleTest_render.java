@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    renderer.begin(ShapeType.Line);
    renderer.setColor(1, 1, 1, 1);
    renderer.line(0, 100, Gdx.graphics.getWidth(), 100);
    renderer.line(100, 0, 100, Gdx.graphics.getHeight());
    renderer.end();
    batch.begin();
    batch.draw(region, 100, 100, 0, 0, 32, 32, 2, 2, 20);
    batch.end();
}
