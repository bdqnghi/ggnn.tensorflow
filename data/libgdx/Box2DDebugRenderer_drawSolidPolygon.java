private void drawSolidPolygon(Vector2[] vertices, int vertexCount, Color color, boolean closed) {
    renderer.setColor(color.r, color.g, color.b, color.a);
    for (int i = 0; i < vertexCount; i++) {
        Vector2 v = vertices[i];
        if (i == 0) {
            lv.set(v);
            f.set(v);
            continue;
        }
        renderer.line(lv.x, lv.y, v.x, v.y);
        lv.set(v);
    }
    if (closed)
        renderer.line(f.x, f.y, lv.x, lv.y);
}
