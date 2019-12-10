public void drawLine(float x1, float y1, float x2, float y2) {
    renderer.setProjectionMatrix(batch.getProjectionMatrix());
    renderer.begin(ShapeType.Line);
    renderer.line(x1, y1, x2, y2);
    renderer.end();
}
