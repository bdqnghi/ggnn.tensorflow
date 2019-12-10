/**
 * Get the centroid and apply the supplied transform.
 */
public Vec2 centroid(final Transform xf) {
    return Transform.mul(xf, m_centroid);
}
