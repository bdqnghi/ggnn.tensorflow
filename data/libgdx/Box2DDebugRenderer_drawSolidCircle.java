private void drawSolidCircle(Vector2 center, float radius, Vector2 axis, Color color) {
    float angle = 0;
    float angleInc = 2 * (float) Math.PI / 20;
    renderer.setColor(color.r, color.g, color.b, color.a);
    for (int i = 0; i < 20; i++, angle += angleInc) {
        v.set((float) Math.cos(angle) * radius + center.x, (float) Math.sin(angle) * radius + center.y);
        if (i == 0) {
            lv.set(v);
            f.set(v);
            continue;
        }
        renderer.line(lv.x, lv.y, v.x, v.y);
        lv.set(v);
    }
    renderer.line(f.x, f.y, lv.x, lv.y);
    renderer.line(center.x, center.y, 0, center.x + axis.x * radius, center.y + axis.y * radius, 0);
}
