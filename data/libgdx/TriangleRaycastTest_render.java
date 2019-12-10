@Override
public void render() {
    super.render();
    Gdx.gl.glLineWidth(5);
    shapeRenderer.setProjectionMatrix(camera.combined);
    shapeRenderer.begin(ShapeRenderer.ShapeType.Line);
    shapeRenderer.setColor(1, 0, 0, 1f);
    shapeRenderer.line(selectedTriangleVertices[0], selectedTriangleVertices[1]);
    shapeRenderer.line(selectedTriangleVertices[1], selectedTriangleVertices[2]);
    shapeRenderer.line(selectedTriangleVertices[2], selectedTriangleVertices[0]);
    shapeRenderer.end();
    Gdx.gl.glLineWidth(1);
}
