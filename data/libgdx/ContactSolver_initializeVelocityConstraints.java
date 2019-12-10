public final void initializeVelocityConstraints() {
    // Warm start.
    for (int i = 0; i < m_count; ++i) {
        ContactVelocityConstraint vc = m_velocityConstraints[i];
        ContactPositionConstraint pc = m_positionConstraints[i];
        float radiusA = pc.radiusA;
        float radiusB = pc.radiusB;
        Manifold manifold = m_contacts[vc.contactIndex].getManifold();
        int indexA = vc.indexA;
        int indexB = vc.indexB;
        float mA = vc.invMassA;
        float mB = vc.invMassB;
        float iA = vc.invIA;
        float iB = vc.invIB;
        Vec2 localCenterA = pc.localCenterA;
        Vec2 localCenterB = pc.localCenterB;
        Vec2 cA = m_positions[indexA].c;
        float aA = m_positions[indexA].a;
        Vec2 vA = m_velocities[indexA].v;
        float wA = m_velocities[indexA].w;
        Vec2 cB = m_positions[indexB].c;
        float aB = m_positions[indexB].a;
        Vec2 vB = m_velocities[indexB].v;
        float wB = m_velocities[indexB].w;
        assert (manifold.pointCount > 0);
        final Rot xfAq = xfA.q;
        final Rot xfBq = xfB.q;
        xfAq.set(aA);
        xfBq.set(aB);
        xfA.p.x = cA.x - (xfAq.c * localCenterA.x - xfAq.s * localCenterA.y);
        xfA.p.y = cA.y - (xfAq.s * localCenterA.x + xfAq.c * localCenterA.y);
        xfB.p.x = cB.x - (xfBq.c * localCenterB.x - xfBq.s * localCenterB.y);
        xfB.p.y = cB.y - (xfBq.s * localCenterB.x + xfBq.c * localCenterB.y);
        worldManifold.initialize(manifold, xfA, radiusA, xfB, radiusB);
        final Vec2 vcnormal = vc.normal;
        vcnormal.x = worldManifold.normal.x;
        vcnormal.y = worldManifold.normal.y;
        int pointCount = vc.pointCount;
        for (int j = 0; j < pointCount; ++j) {
            VelocityConstraintPoint vcp = vc.points[j];
            Vec2 wmPj = worldManifold.points[j];
            final Vec2 vcprA = vcp.rA;
            final Vec2 vcprB = vcp.rB;
            vcprA.x = wmPj.x - cA.x;
            vcprA.y = wmPj.y - cA.y;
            vcprB.x = wmPj.x - cB.x;
            vcprB.y = wmPj.y - cB.y;
            float rnA = vcprA.x * vcnormal.y - vcprA.y * vcnormal.x;
            float rnB = vcprB.x * vcnormal.y - vcprB.y * vcnormal.x;
            float kNormal = mA + mB + iA * rnA * rnA + iB * rnB * rnB;
            vcp.normalMass = kNormal > 0.0f ? 1.0f / kNormal : 0.0f;
            float tangentx = 1.0f * vcnormal.y;
            float tangenty = -1.0f * vcnormal.x;
            float rtA = vcprA.x * tangenty - vcprA.y * tangentx;
            float rtB = vcprB.x * tangenty - vcprB.y * tangentx;
            float kTangent = mA + mB + iA * rtA * rtA + iB * rtB * rtB;
            vcp.tangentMass = kTangent > 0.0f ? 1.0f / kTangent : 0.0f;
            // Setup a velocity bias for restitution.
            vcp.velocityBias = 0.0f;
            float tempx = vB.x + -wB * vcprB.y - vA.x - (-wA * vcprA.y);
            float tempy = vB.y + wB * vcprB.x - vA.y - (wA * vcprA.x);
            float vRel = vcnormal.x * tempx + vcnormal.y * tempy;
            if (vRel < -Settings.velocityThreshold) {
                vcp.velocityBias = -vc.restitution * vRel;
            }
        }
        // If we have two points, then prepare the block solver.
        if (vc.pointCount == 2) {
            VelocityConstraintPoint vcp1 = vc.points[0];
            VelocityConstraintPoint vcp2 = vc.points[1];
            float rn1A = vcp1.rA.x * vcnormal.y - vcp1.rA.y * vcnormal.x;
            float rn1B = vcp1.rB.x * vcnormal.y - vcp1.rB.y * vcnormal.x;
            float rn2A = vcp2.rA.x * vcnormal.y - vcp2.rA.y * vcnormal.x;
            float rn2B = vcp2.rB.x * vcnormal.y - vcp2.rB.y * vcnormal.x;
            float k11 = mA + mB + iA * rn1A * rn1A + iB * rn1B * rn1B;
            float k22 = mA + mB + iA * rn2A * rn2A + iB * rn2B * rn2B;
            float k12 = mA + mB + iA * rn1A * rn2A + iB * rn1B * rn2B;
            if (k11 * k11 < k_maxConditionNumber * (k11 * k22 - k12 * k12)) {
                // K is safe to invert.
                vc.K.ex.x = k11;
                vc.K.ex.y = k12;
                vc.K.ey.x = k12;
                vc.K.ey.y = k22;
                vc.K.invertToOut(vc.normalMass);
            } else {
                // The constraints are redundant, just use one.
                // TODO_ERIN use deepest?
                vc.pointCount = 1;
            }
        }
    }
}
