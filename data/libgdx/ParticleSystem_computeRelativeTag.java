static long computeRelativeTag(long tag, int x, int y) {
    return tag + (y << yShift) + (x << xShift);
}
