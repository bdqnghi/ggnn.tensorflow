public static final boolean testOverlap(final AABB a, final AABB b) {
    if (b.lowerBound.x - a.upperBound.x > 0.0f || b.lowerBound.y - a.upperBound.y > 0.0f) {
        return false;
    }
    if (a.lowerBound.x - b.upperBound.x > 0.0f || a.lowerBound.y - b.upperBound.y > 0.0f) {
        return false;
    }
    return true;
}
