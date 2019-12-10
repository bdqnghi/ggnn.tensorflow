/**
 * Get the centroid and apply the supplied transform.
 */
public Vec2 centroidToOut(final Transform xf, final Vec2 out) {
    Transform.mulToOutUnsafe(xf, m_centroid, out);
    return out;
}
