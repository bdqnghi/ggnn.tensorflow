/**
 * Gets a local vector given a world vector.
 *
 * @param a vector in world coordinates.
 * @return the corresponding local vector.
 */
public final Vec2 getLocalVector(Vec2 worldVector) {
    Vec2 out = new Vec2();
    getLocalVectorToOut(worldVector, out);
    return out;
}
