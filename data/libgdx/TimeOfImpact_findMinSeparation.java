// float FindMinSeparation(int* indexA, int* indexB, float t) const
public float findMinSeparation(int[] indexes, float t) {
    m_sweepA.getTransform(xfa, t);
    m_sweepB.getTransform(xfb, t);
    switch(m_type) {
        case POINTS:
            {
                Rot.mulTransUnsafe(xfa.q, m_axis, axisA);
                Rot.mulTransUnsafe(xfb.q, m_axis.negateLocal(), axisB);
                m_axis.negateLocal();
                indexes[0] = m_proxyA.getSupport(axisA);
                indexes[1] = m_proxyB.getSupport(axisB);
                localPointA.set(m_proxyA.getVertex(indexes[0]));
                localPointB.set(m_proxyB.getVertex(indexes[1]));
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
                indexes[0] = -1;
                indexes[1] = m_proxyB.getSupport(axisB);
                localPointB.set(m_proxyB.getVertex(indexes[1]));
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
                indexes[1] = -1;
                indexes[0] = m_proxyA.getSupport(axisA);
                localPointA.set(m_proxyA.getVertex(indexes[0]));
                Transform.mulToOutUnsafe(xfa, localPointA, pointA);
                float separation = Vec2.dot(pointA.subLocal(pointB), normal);
                return separation;
            }
        default:
            assert (false);
            indexes[0] = -1;
            indexes[1] = -1;
            return 0f;
    }
}
