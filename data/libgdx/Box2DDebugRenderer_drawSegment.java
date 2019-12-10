private void drawSegment(Vector2 x1, Vector2 x2, Color color) {
    renderer.setColor(color);
    renderer.line(x1.x, x1.y, x2.x, x2.y);
}
