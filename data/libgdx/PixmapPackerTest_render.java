@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    int size = Math.min(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    batch.begin();
    batch.draw(textureRegions.get(pageToShow), 0, 0, size, size);
    batch.end();
    shapeRenderer.begin(ShapeRenderer.ShapeType.Line);
    shapeRenderer.setColor(Color.GREEN);
    shapeRenderer.rect(0, 0, size, size);
    shapeRenderer.end();
}
