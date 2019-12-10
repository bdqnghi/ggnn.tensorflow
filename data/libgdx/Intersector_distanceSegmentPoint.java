/**
 * Returns the distance between the given segment and point.
 */
public static float distanceSegmentPoint(Vector2 start, Vector2 end, Vector2 point) {
    return nearestSegmentPoint(start, end, point, v2tmp).dst(point);
}
