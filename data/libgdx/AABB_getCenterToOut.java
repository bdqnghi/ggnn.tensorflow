public final void getCenterToOut(final Vec2 out) {
    out.x = (lowerBound.x + upperBound.x) * .5f;
    out.y = (lowerBound.y + upperBound.y) * .5f;
}
