/**
 * Get the world coordinates of a point given the local coordinates.
 *
 * @param localPoint a point on the body measured relative the the body's origin.
 * @return the same point expressed in world coordinates.
 */
public final Vec2 getWorldPoint(Vec2 localPoint) {
    Vec2 v = new Vec2();
    getWorldPointToOut(localPoint, v);
    return v;
}
