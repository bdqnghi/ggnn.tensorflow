/**
 * Set the coordinates and color of a ninth of the patch.
 */
private void set(int idx, float x, float y, float width, float height, float color) {
    final float fx2 = x + width;
    final float fy2 = y + height;
    final float[] vertices = this.vertices;
    vertices[idx++] = x;
    vertices[idx++] = y;
    vertices[idx] = color;
    idx += 3;
    vertices[idx++] = x;
    vertices[idx++] = fy2;
    vertices[idx] = color;
    idx += 3;
    vertices[idx++] = fx2;
    vertices[idx++] = fy2;
    vertices[idx] = color;
    idx += 3;
    vertices[idx++] = fx2;
    vertices[idx++] = y;
    vertices[idx] = color;
}
