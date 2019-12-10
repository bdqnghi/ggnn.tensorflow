public void warmStart() {
    // Warm start.
    for (int i = 0; i < m_count; ++i) {
        final ContactVelocityConstraint vc = m_velocityConstraints[i];
        int indexA = vc.indexA;
        int indexB = vc.indexB;
        float mA = vc.invMassA;
        float iA = vc.invIA;
        float mB = vc.invMassB;
        float iB = vc.invIB;
        int pointCount = vc.pointCount;
        Vec2 vA = m_velocities[indexA].v;
        float wA = m_velocities[indexA].w;
        Vec2 vB = m_velocities[indexB].v;
        float wB = m_velocities[indexB].w;
        Vec2 normal = vc.normal;
        float tangentx = 1.0f * normal.y;
        float tangenty = -1.0f * normal.x;
        for (int j = 0; j < pointCount; ++j) {
            VelocityConstraintPoint vcp = vc.points[j];
            float Px = tangentx * vcp.tangentImpulse + normal.x * vcp.normalImpulse;
            float Py = tangenty * vcp.tangentImpulse + normal.y * vcp.normalImpulse;
            wA -= iA * (vcp.rA.x * Py - vcp.rA.y * Px);
            vA.x -= Px * mA;
            vA.y -= Py * mA;
            wB += iB * (vcp.rB.x * Py - vcp.rB.y * Px);
            vB.x += Px * mB;
            vB.y += Py * mB;
        }
        m_velocities[indexA].w = wA;
        m_velocities[indexB].w = wB;
    }
}
