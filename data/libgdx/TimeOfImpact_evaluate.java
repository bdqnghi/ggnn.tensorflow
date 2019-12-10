public float evaluate(int indexA, int indexB, float t) {
    m_sweepA.getTransform(xfa, t);
    m_sweepB.getTransform(xfb, t);
    switch(m_type) {
        case POINTS:
            {
                Rot.mulTransUnsafe(xfa.q, m_axis, axisA);
                Rot.mulTransUnsafe(xfb.q, m_axis.negateLocal(), axisB);
                m_axis.negateLocal();
                localPointA.set(m_proxyA.getVertex(indexA));
                localPointB.set(m_proxyB.getVertex(indexB));
                Transform.mulToOutUnsafe(xfa, localPointA, pointA);
                Transform.mulToOutUnsafe(xfb, localPointB, pointB);
                float separation = Vec2.dot(pointB.subLocal(pointA), m_axis);
                return separation;
            }
        case FACE_A:
            {
                Rot.mulToOutUnsafe(xfa.q, m_axis, normal);
                Transform.mulToOutUnsafe(xfa, m_localPoint, pointA);
                Rot.mulTransUnsafe(xfb.q, normal.negateLocal(), axisB);
                normal.negateLocal();
                localPointB.set(m_proxyB.getVertex(indexB));
                Transform.mulToOutUnsafe(xfb, localPointB, pointB);
                float separation = Vec2.dot(pointB.subLocal(pointA), normal);
                return separation;
            }
        case FACE_B:
            {
                Rot.mulToOutUnsafe(xfb.q, m_axis, normal);
                Transform.mulToOutUnsafe(xfb, m_localPoint, pointB);
                Rot.mulTransUnsafe(xfa.q, normal.negateLocal(), axisA);
                normal.negateLocal();
                localPointA.set(m_proxyA.getVertex(indexA));
                Transform.mulToOutUnsafe(xfa, localPointA, pointA);
                float separation = Vec2.dot(pointA.subLocal(pointB), normal);
                return separation;
            }
        default:
            assert (false);
            return 0f;
    }
}
