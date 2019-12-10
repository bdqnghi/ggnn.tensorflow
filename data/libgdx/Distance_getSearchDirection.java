public final void getSearchDirection(final Vec2 out) {
    switch(m_count) {
        case 1:
            out.set(m_v1.w).negateLocal();
            return;
        case 2:
            e12.set(m_v2.w).subLocal(m_v1.w);
            // use out for a temp variable real quick
            out.set(m_v1.w).negateLocal();
            float sgn = Vec2.cross(e12, out);
            if (sgn > 0f) {
                // Origin is left of e12.
                Vec2.crossToOutUnsafe(1f, e12, out);
                return;
            } else {
                // Origin is right of e12.
                Vec2.crossToOutUnsafe(e12, 1f, out);
                return;
            }
        default:
            assert (false);
            out.setZero();
            return;
    }
}
