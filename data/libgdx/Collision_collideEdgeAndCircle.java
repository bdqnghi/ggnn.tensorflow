// Compute contact points for edge versus circle.
// This accounts for edge connectivity.
public void collideEdgeAndCircle(Manifold manifold, final EdgeShape edgeA, final Transform xfA, final CircleShape circleB, final Transform xfB) {
    manifold.pointCount = 0;
    // Compute circle in frame of edge
    // Vec2 Q = MulT(xfA, Mul(xfB, circleB.m_p));
    Transform.mulToOutUnsafe(xfB, circleB.m_p, temp);
    Transform.mulTransToOutUnsafe(xfA, temp, Q);
    final Vec2 A = edgeA.m_vertex1;
    final Vec2 B = edgeA.m_vertex2;
    e.set(B).subLocal(A);
    // Barycentric coordinates
    float u = Vec2.dot(e, temp.set(B).subLocal(Q));
    float v = Vec2.dot(e, temp.set(Q).subLocal(A));
    float radius = edgeA.m_radius + circleB.m_radius;
    // ContactFeature cf;
    cf.indexB = 0;
    cf.typeB = (byte) ContactID.Type.VERTEX.ordinal();
    // Region A
    if (v <= 0.0f) {
        final Vec2 P = A;
        d.set(Q).subLocal(P);
        float dd = Vec2.dot(d, d);
        if (dd > radius * radius) {
            return;
        }
        // Is there an edge connected to A?
        if (edgeA.m_hasVertex0) {
            final Vec2 A1 = edgeA.m_vertex0;
            final Vec2 B1 = A;
            e1.set(B1).subLocal(A1);
            float u1 = Vec2.dot(e1, temp.set(B1).subLocal(Q));
            // Is the circle in Region AB of the previous edge?
            if (u1 > 0.0f) {
                return;
            }
        }
        cf.indexA = 0;
        cf.typeA = (byte) ContactID.Type.VERTEX.ordinal();
        manifold.pointCount = 1;
        manifold.type = Manifold.ManifoldType.CIRCLES;
        manifold.localNormal.setZero();
        manifold.localPoint.set(P);
        // manifold.points[0].id.key = 0;
        manifold.points[0].id.set(cf);
        manifold.points[0].localPoint.set(circleB.m_p);
        return;
    }
    // Region B
    if (u <= 0.0f) {
        Vec2 P = B;
        d.set(Q).subLocal(P);
        float dd = Vec2.dot(d, d);
        if (dd > radius * radius) {
            return;
        }
        // Is there an edge connected to B?
        if (edgeA.m_hasVertex3) {
            final Vec2 B2 = edgeA.m_vertex3;
            final Vec2 A2 = B;
            final Vec2 e2 = e1;
            e2.set(B2).subLocal(A2);
            float v2 = Vec2.dot(e2, temp.set(Q).subLocal(A2));
            // Is the circle in Region AB of the next edge?
            if (v2 > 0.0f) {
                return;
            }
        }
        cf.indexA = 1;
        cf.typeA = (byte) ContactID.Type.VERTEX.ordinal();
        manifold.pointCount = 1;
        manifold.type = Manifold.ManifoldType.CIRCLES;
        manifold.localNormal.setZero();
        manifold.localPoint.set(P);
        // manifold.points[0].id.key = 0;
        manifold.points[0].id.set(cf);
        manifold.points[0].localPoint.set(circleB.m_p);
        return;
    }
    // Region AB
    float den = Vec2.dot(e, e);
    assert (den > 0.0f);
    // Vec2 P = (1.0f / den) * (u * A + v * B);
    P.set(A).mulLocal(u).addLocal(temp.set(B).mulLocal(v));
    P.mulLocal(1.0f / den);
    d.set(Q).subLocal(P);
    float dd = Vec2.dot(d, d);
    if (dd > radius * radius) {
        return;
    }
    n.x = -e.y;
    n.y = e.x;
    if (Vec2.dot(n, temp.set(Q).subLocal(A)) < 0.0f) {
        n.set(-n.x, -n.y);
    }
    n.normalize();
    cf.indexA = 0;
    cf.typeA = (byte) ContactID.Type.FACE.ordinal();
    manifold.pointCount = 1;
    manifold.type = Manifold.ManifoldType.FACE_A;
    manifold.localNormal.set(n);
    manifold.localPoint.set(A);
    // manifold.points[0].id.key = 0;
    manifold.points[0].id.set(cf);
    manifold.points[0].localPoint.set(circleB.m_p);
}
