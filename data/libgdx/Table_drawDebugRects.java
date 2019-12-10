private void drawDebugRects(ShapeRenderer shapes) {
    if (debugRects == null || !getDebug())
        return;
    shapes.set(ShapeType.Line);
    shapes.setColor(getStage().getDebugColor());
    float x = 0, y = 0;
    if (!isTransform()) {
        x = getX();
        y = getY();
    }
    for (int i = 0, n = debugRects.size; i < n; i++) {
        DebugRect debugRect = debugRects.get(i);
        shapes.setColor(debugRect.color);
        shapes.rect(x + debugRect.x, y + debugRect.y, debugRect.width, debugRect.height);
    }
}
