/**
 * Returns a point on the segment nearest to the specified point.
 */
public static Vector2 nearestSegmentPoint(float startX, float startY, float endX, float endY, float pointX, float pointY, Vector2 nearest) {
    final float xDiff = endX - startX;
    final float yDiff = endY - startY;
    float length2 = xDiff * xDiff + yDiff * yDiff;
    if (length2 == 0)
        return nearest.set(startX, startY);
    float t = ((pointX - startX) * (endX - startX) + (pointY - startY) * (endY - startY)) / length2;
    if (t < 0)
        return nearest.set(startX, startY);
    if (t > 1)
        return nearest.set(endX, endY);
    return nearest.set(startX + t * (endX - startX), startY + t * (endY - startY));
}
