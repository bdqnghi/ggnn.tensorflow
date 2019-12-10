/**
 * Get the world velocity of a local point.
 *
 * @param a point in local coordinates.
 * @return the world velocity of a point.
 */
public final Vec2 getLinearVelocityFromLocalPoint(Vec2 localPoint) {
    Vec2 out = new Vec2();
    getLinearVelocityFromLocalPointToOut(localPoint, out);
    return out;
}
