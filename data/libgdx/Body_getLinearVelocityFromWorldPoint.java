/**
 * Get the world linear velocity of a world point attached to this body.
 *
 * @param a point in world coordinates.
 * @return the world velocity of a point.
 */
public final Vec2 getLinearVelocityFromWorldPoint(Vec2 worldPoint) {
    Vec2 out = new Vec2();
    getLinearVelocityFromWorldPointToOut(worldPoint, out);
    return out;
}
