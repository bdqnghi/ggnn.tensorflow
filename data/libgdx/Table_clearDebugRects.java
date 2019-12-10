private void clearDebugRects() {
    if (debugRects == null)
        return;
    DebugRect.pool.freeAll(debugRects);
    debugRects.clear();
}
