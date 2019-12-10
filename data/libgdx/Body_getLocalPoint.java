/**
 * Gets a local point relative to the body's origin given a world point.
 *
 * @param a point in world coordinates.
 * @return the corresponding local point relative to the body's origin.
 */
public final Vec2 getLocalPoint(Vec2 worldPoint) {
    Vec2 out = new Vec2();
    getLocalPointToOut(worldPoint, out);
    return out;
}
