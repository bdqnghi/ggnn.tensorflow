static long computeTag(float x, float y) {
    return (((long) (y + yOffset)) << yShift) + (((long) (xScale * x)) + xOffset);
}
