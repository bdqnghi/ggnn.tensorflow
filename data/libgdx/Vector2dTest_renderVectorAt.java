private void renderVectorAt(float x, float y, Vector2 v) {
    renderer.line(x, y, x + v.x, y + v.y);
}
