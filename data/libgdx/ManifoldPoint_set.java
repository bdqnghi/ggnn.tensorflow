/**
 * Sets this manifold point form the given one
 * @param cp the point to copy from
 */
public void set(final ManifoldPoint cp) {
    localPoint.set(cp.localPoint);
    normalImpulse = cp.normalImpulse;
    tangentImpulse = cp.tangentImpulse;
    id.set(cp.id);
}
