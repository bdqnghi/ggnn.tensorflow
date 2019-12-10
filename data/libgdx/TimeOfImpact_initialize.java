// TODO_ERIN might not need to return the separation
public float initialize(final SimplexCache cache, final DistanceProxy proxyA, final Sweep sweepA, final DistanceProxy proxyB, final Sweep sweepB, float t1) {
    m_proxyA = proxyA;
    m_proxyB = proxyB;
    int count = cache.count;
    assert (0 < count && count < 3);
    m_sweepA = sweepA;
    m_sweepB = sweepB;
    m_sweepA.getTransform(xfa, t1);
    m_sweepB.getTransform(xfb, t1);
    if (count == 1) {
        m_type = Type.POINTS;
        /*
       * Vec2 localPointA = m_proxyA.GetVertex(cache.indexA[0]); Vec2 localPointB =
       * m_proxyB.GetVertex(cache.indexB[0]); Vec2 pointA = Mul(transformA, localPointA); Vec2
       * pointB = Mul(transformB, localPointB); m_axis = pointB - pointA; m_axis.Normalize();
       */
        localPointA.set(m_proxyA.getVertex(cache.indexA[0]));
        localPointB.set(m_proxyB.getVertex(cache.indexB[0]));
        Transform.mulToOutUnsafe(xfa, localPointA, pointA);
        Transform.mulToOutUnsafe(xfb, localPointB, pointB);
        m_axis.set(pointB).subLocal(pointA);
        float s = m_axis.normalize();
        return s;
    } else if (cache.indexA[0] == cache.indexA[1]) {
        // Two points on B and one on A.
        m_type = Type.FACE_B;
        localPointB1.set(m_proxyB.getVertex(cache.indexB[0]));
        localPointB2.set(m_proxyB.getVertex(cache.indexB[1]));
        temp.set(localPointB2).subLocal(localPointB1);
        Vec2.crossToOutUnsafe(temp, 1f, m_axis);
        m_axis.normalize();
        Rot.mulToOutUnsafe(xfb.q, m_axis, normal);
        m_localPoint.set(localPointB1).addLocal(localPointB2).mulLocal(.5f);
        Transform.mulToOutUnsafe(xfb, m_localPoint, pointB);
        localPointA.set(proxyA.getVertex(cache.indexA[0]));
        Transform.mulToOutUnsafe(xfa, localPointA, pointA);
        temp.set(pointA).subLocal(pointB);
        float s = Vec2.dot(temp, normal);
        if (s < 0.0f) {
            m_axis.negateLocal();
            s = -s;
        }
        return s;
    } else {
        // Two points on A and one or two points on B.
        m_type = Type.FACE_A;
        localPointA1.set(m_proxyA.getVertex(cache.indexA[0]));
        localPointA2.set(m_proxyA.getVertex(cache.indexA[1]));
        temp.set(localPointA2).subLocal(localPointA1);
        Vec2.crossToOutUnsafe(temp, 1.0f, m_axis);
        m_axis.normalize();
        Rot.mulToOutUnsafe(xfa.q, m_axis, normal);
        m_localPoint.set(localPointA1).addLocal(localPointA2).mulLocal(.5f);
        Transform.mulToOutUnsafe(xfa, m_localPoint, pointA);
        localPointB.set(m_proxyB.getVertex(cache.indexB[0]));
        Transform.mulToOutUnsafe(xfb, localPointB, pointB);
        temp.set(pointB).subLocal(pointA);
        float s = Vec2.dot(temp, normal);
        if (s < 0.0f) {
            m_axis.negateLocal();
            s = -s;
        }
        return s;
    }
}
