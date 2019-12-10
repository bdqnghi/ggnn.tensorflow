/**
 * this returns pooled objects. don't keep or modify them
 *
 * @return
 */
public void getClosestPoint(final Vec2 out) {
    switch(m_count) {
        case 0:
            assert (false);
            out.setZero();
            return;
        case 1:
            out.set(m_v1.w);
            return;
        case 2:
            case22.set(m_v2.w).mulLocal(m_v2.a);
            case2.set(m_v1.w).mulLocal(m_v1.a).addLocal(case22);
            out.set(case2);
            return;
        case 3:
            out.setZero();
            return;
        default:
            assert (false);
            out.setZero();
            return;
    }
}
