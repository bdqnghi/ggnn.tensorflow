@Override
public void render() {
    Gdx.gl.glClearColor(0, 0, 0, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    renderer.begin(ShapeType.Filled);
    if (Gdx.input.isTouched())
        renderer.setColor(Color.RED);
    else
        renderer.setColor(Color.GREEN);
    renderer.rect(Gdx.input.getX() - 15, Gdx.graphics.getHeight() - Gdx.input.getY() - 15, 30, 30);
    renderer.end();
}
