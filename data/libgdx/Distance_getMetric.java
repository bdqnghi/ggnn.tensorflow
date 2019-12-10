// djm pooled, from above
public float getMetric() {
    switch(m_count) {
        case 0:
            assert (false);
            return 0.0f;
        case 1:
            return 0.0f;
        case 2:
            return MathUtils.distance(m_v1.w, m_v2.w);
        case 3:
            case3.set(m_v2.w).subLocal(m_v1.w);
            case33.set(m_v3.w).subLocal(m_v1.w);
            // return Vec2.cross(m_v2.w - m_v1.w, m_v3.w - m_v1.w);
            return Vec2.cross(case3, case33);
        default:
            assert (false);
            return 0.0f;
    }
}
