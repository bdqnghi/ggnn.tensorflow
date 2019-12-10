// Sequential position solver for position constraints.
public boolean solveTOIPositionConstraints(int toiIndexA, int toiIndexB) {
    float minSeparation = 0.0f;
    for (int i = 0; i < m_count; ++i) {
        ContactPositionConstraint pc = m_positionConstraints[i];
        int indexA = pc.indexA;
        int indexB = pc.indexB;
        Vec2 localCenterA = pc.localCenterA;
        Vec2 localCenterB = pc.localCenterB;
        final float localCenterAx = localCenterA.x;
        final float localCenterAy = localCenterA.y;
        final float localCenterBx = localCenterB.x;
        final float localCenterBy = localCenterB.y;
        int pointCount = pc.pointCount;
        float mA = 0.0f;
        float iA = 0.0f;
        if (indexA == toiIndexA || indexA == toiIndexB) {
            mA = pc.invMassA;
            iA = pc.invIA;
        }
        float mB = 0f;
        float iB = 0f;
        if (indexB == toiIndexA || indexB == toiIndexB) {
            mB = pc.invMassB;
            iB = pc.invIB;
        }
        Vec2 cA = m_positions[indexA].c;
        float aA = m_positions[indexA].a;
        Vec2 cB = m_positions[indexB].c;
        float aB = m_positions[indexB].a;
        // Solve normal constraints
        for (int j = 0; j < pointCount; ++j) {
            final Rot xfAq = xfA.q;
            final Rot xfBq = xfB.q;
            xfAq.set(aA);
            xfBq.set(aB);
            xfA.p.x = cA.x - xfAq.c * localCenterAx + xfAq.s * localCenterAy;
            xfA.p.y = cA.y - xfAq.s * localCenterAx - xfAq.c * localCenterAy;
            xfB.p.x = cB.x - xfBq.c * localCenterBx + xfBq.s * localCenterBy;
            xfB.p.y = cB.y - xfBq.s * localCenterBx - xfBq.c * localCenterBy;
            final PositionSolverManifold psm = psolver;
            psm.initialize(pc, xfA, xfB, j);
            Vec2 normal = psm.normal;
            Vec2 point = psm.point;
            float separation = psm.separation;
            float rAx = point.x - cA.x;
            float rAy = point.y - cA.y;
            float rBx = point.x - cB.x;
            float rBy = point.y - cB.y;
            // Track max constraint error.
            minSeparation = MathUtils.min(minSeparation, separation);
            // Prevent large corrections and allow slop.
            float C = MathUtils.clamp(Settings.toiBaugarte * (separation + Settings.linearSlop), -Settings.maxLinearCorrection, 0.0f);
            // Compute the effective mass.
            float rnA = rAx * normal.y - rAy * normal.x;
            float rnB = rBx * normal.y - rBy * normal.x;
            float K = mA + mB + iA * rnA * rnA + iB * rnB * rnB;
            // Compute normal impulse
            float impulse = K > 0.0f ? -C / K : 0.0f;
            float Px = normal.x * impulse;
            float Py = normal.y * impulse;
            cA.x -= Px * mA;
            cA.y -= Py * mA;
            aA -= iA * (rAx * Py - rAy * Px);
            cB.x += Px * mB;
            cB.y += Py * mB;
            aB += iB * (rBx * Py - rBy * Px);
        }
        // m_positions[indexA].c.set(cA);
        m_positions[indexA].a = aA;
        // m_positions[indexB].c.set(cB);
        m_positions[indexB].a = aB;
    }
    // push the separation above -_linearSlop.
    return minSeparation >= -1.5f * Settings.linearSlop;
}
