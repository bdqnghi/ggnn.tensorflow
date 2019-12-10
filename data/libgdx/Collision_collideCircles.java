/**
 * Compute the collision manifold between two circles.
 *
 * @param manifold
 * @param circle1
 * @param xfA
 * @param circle2
 * @param xfB
 */
public final void collideCircles(Manifold manifold, final CircleShape circle1, final Transform xfA, final CircleShape circle2, final Transform xfB) {
    manifold.pointCount = 0;
    // before inline:
    // Transform.mulToOut(xfA, circle1.m_p, pA);
    // Transform.mulToOut(xfB, circle2.m_p, pB);
    // d.set(pB).subLocal(pA);
    // float distSqr = d.x * d.x + d.y * d.y;
    // after inline:
    Vec2 circle1p = circle1.m_p;
    Vec2 circle2p = circle2.m_p;
    float pAx = (xfA.q.c * circle1p.x - xfA.q.s * circle1p.y) + xfA.p.x;
    float pAy = (xfA.q.s * circle1p.x + xfA.q.c * circle1p.y) + xfA.p.y;
    float pBx = (xfB.q.c * circle2p.x - xfB.q.s * circle2p.y) + xfB.p.x;
    float pBy = (xfB.q.s * circle2p.x + xfB.q.c * circle2p.y) + xfB.p.y;
    float dx = pBx - pAx;
    float dy = pBy - pAy;
    float distSqr = dx * dx + dy * dy;
    // end inline
    final float radius = circle1.m_radius + circle2.m_radius;
    if (distSqr > radius * radius) {
        return;
    }
    manifold.type = ManifoldType.CIRCLES;
    manifold.localPoint.set(circle1p);
    manifold.localNormal.setZero();
    manifold.pointCount = 1;
    manifold.points[0].localPoint.set(circle2p);
    manifold.points[0].id.zero();
}
