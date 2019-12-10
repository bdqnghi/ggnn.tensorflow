public final void getExtentsToOut(final Vec2 out) {
    out.x = (upperBound.x - lowerBound.x) * .5f;
    // thanks FDN1
    out.y = (upperBound.y - lowerBound.y) * .5f;
}
