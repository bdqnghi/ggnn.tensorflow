/**
 * Get the world coordinates of a vector given the local coordinates.
 *
 * @param localVector a vector fixed in the body.
 * @return the same vector expressed in world coordinates.
 */
public final Vec2 getWorldVector(Vec2 localVector) {
    Vec2 out = new Vec2();
    getWorldVectorToOut(localVector, out);
    return out;
}
