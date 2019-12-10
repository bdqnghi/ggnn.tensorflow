/**
 * Returns the endpoint given the distance. This is calculated as startpoint + distance * direction.
 * @param out The vector to set to the result
 * @param distance The distance from the end point to the start point.
 * @return The out param
 */
public Vector3 getEndPoint(final Vector3 out, final float distance) {
    return out.set(direction).scl(distance).add(origin);
}
