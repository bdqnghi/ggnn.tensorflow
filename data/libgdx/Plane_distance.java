/**
 * Calculates the shortest signed distance between the plane and the given point.
 *
 * @param point The point
 * @return the shortest signed distance between the plane and the point
 */
public float distance(Vector3 point) {
    return normal.dot(point) + d;
}
