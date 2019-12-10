private void addDebugRect(float x, float y, float w, float h, Color color) {
    if (debugRects == null)
        debugRects = new Array();
    DebugRect rect = DebugRect.pool.obtain();
    rect.color = color;
    rect.set(x, getHeight() - y - h, w, h);
    debugRects.add(rect);
}
