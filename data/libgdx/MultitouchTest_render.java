@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    camera.update();
    renderer.setProjectionMatrix(camera.combined);
    renderer.begin(ShapeType.Filled);
    int size = Math.max(Gdx.graphics.getWidth(), Gdx.graphics.getHeight()) / 10;
    for (int i = 0; i < 10; i++) {
        if (Gdx.input.isTouched(i) == false)
            continue;
        float x = Gdx.input.getX(i);
        float y = Gdx.graphics.getHeight() - Gdx.input.getY(i) - 1;
        Color color = colors[i % colors.length];
        renderer.setColor(color);
        renderer.triangle(x, y + size, x + size, y - size, x - size, y - size);
    }
    renderer.end();
}
