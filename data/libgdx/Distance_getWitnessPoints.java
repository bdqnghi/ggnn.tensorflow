public void getWitnessPoints(Vec2 pA, Vec2 pB) {
    switch(m_count) {
        case 0:
            assert (false);
            break;
        case 1:
            pA.set(m_v1.wA);
            pB.set(m_v1.wB);
            break;
        case 2:
            case2.set(m_v1.wA).mulLocal(m_v1.a);
            pA.set(m_v2.wA).mulLocal(m_v2.a).addLocal(case2);
            // m_v1.a * m_v1.wA + m_v2.a * m_v2.wA;
            // *pB = m_v1.a * m_v1.wB + m_v2.a * m_v2.wB;
            case2.set(m_v1.wB).mulLocal(m_v1.a);
            pB.set(m_v2.wB).mulLocal(m_v2.a).addLocal(case2);
            break;
        case 3:
            pA.set(m_v1.wA).mulLocal(m_v1.a);
            case3.set(m_v2.wA).mulLocal(m_v2.a);
            case33.set(m_v3.wA).mulLocal(m_v3.a);
            pA.addLocal(case3).addLocal(case33);
            pB.set(pA);
            // *pB = *pA;
            break;
        default:
            assert (false);
            break;
    }
}
