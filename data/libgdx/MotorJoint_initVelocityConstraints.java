@Override
public void initVelocityConstraints(SolverData data) {
    m_indexA = m_bodyA.m_islandIndex;
    m_indexB = m_bodyB.m_islandIndex;
    m_localCenterA.set(m_bodyA.m_sweep.localCenter);
    m_localCenterB.set(m_bodyB.m_sweep.localCenter);
    m_invMassA = m_bodyA.m_invMass;
    m_invMassB = m_bodyB.m_invMass;
    m_invIA = m_bodyA.m_invI;
    m_invIB = m_bodyB.m_invI;
    final Vec2 cA = data.positions[m_indexA].c;
    float aA = data.positions[m_indexA].a;
    final Vec2 vA = data.velocities[m_indexA].v;
    float wA = data.velocities[m_indexA].w;
    final Vec2 cB = data.positions[m_indexB].c;
    float aB = data.positions[m_indexB].a;
    final Vec2 vB = data.velocities[m_indexB].v;
    float wB = data.velocities[m_indexB].w;
    final Rot qA = pool.popRot();
    final Rot qB = pool.popRot();
    final Vec2 temp = pool.popVec2();
    Mat22 K = pool.popMat22();
    qA.set(aA);
    qB.set(aB);
    // Compute the effective mass matrix.
    // m_rA = b2Mul(qA, -m_localCenterA);
    // m_rB = b2Mul(qB, -m_localCenterB);
    m_rA.x = qA.c * -m_localCenterA.x - qA.s * -m_localCenterA.y;
    m_rA.y = qA.s * -m_localCenterA.x + qA.c * -m_localCenterA.y;
    m_rB.x = qB.c * -m_localCenterB.x - qB.s * -m_localCenterB.y;
    m_rB.y = qB.s * -m_localCenterB.x + qB.c * -m_localCenterB.y;
    // J = [-I -r1_skew I r2_skew]
    // [ 0 -1 0 1]
    // r_skew = [-ry; rx]
    // Matlab
    // K = [ mA+r1y^2*iA+mB+r2y^2*iB, -r1y*iA*r1x-r2y*iB*r2x, -r1y*iA-r2y*iB]
    // [ -r1y*iA*r1x-r2y*iB*r2x, mA+r1x^2*iA+mB+r2x^2*iB, r1x*iA+r2x*iB]
    // [ -r1y*iA-r2y*iB, r1x*iA+r2x*iB, iA+iB]
    float mA = m_invMassA, mB = m_invMassB;
    float iA = m_invIA, iB = m_invIB;
    K.ex.x = mA + mB + iA * m_rA.y * m_rA.y + iB * m_rB.y * m_rB.y;
    K.ex.y = -iA * m_rA.x * m_rA.y - iB * m_rB.x * m_rB.y;
    K.ey.x = K.ex.y;
    K.ey.y = mA + mB + iA * m_rA.x * m_rA.x + iB * m_rB.x * m_rB.x;
    K.invertToOut(m_linearMass);
    m_angularMass = iA + iB;
    if (m_angularMass > 0.0f) {
        m_angularMass = 1.0f / m_angularMass;
    }
    // m_linearError = cB + m_rB - cA - m_rA - b2Mul(qA, m_linearOffset);
    Rot.mulToOutUnsafe(qA, m_linearOffset, temp);
    m_linearError.x = cB.x + m_rB.x - cA.x - m_rA.x - temp.x;
    m_linearError.y = cB.y + m_rB.y - cA.y - m_rA.y - temp.y;
    m_angularError = aB - aA - m_angularOffset;
    if (data.step.warmStarting) {
        // Scale impulses to support a variable time step.
        m_linearImpulse.x *= data.step.dtRatio;
        m_linearImpulse.y *= data.step.dtRatio;
        m_angularImpulse *= data.step.dtRatio;
        final Vec2 P = m_linearImpulse;
        vA.x -= mA * P.x;
        vA.y -= mA * P.y;
        wA -= iA * (m_rA.x * P.y - m_rA.y * P.x + m_angularImpulse);
        vB.x += mB * P.x;
        vB.y += mB * P.y;
        wB += iB * (m_rB.x * P.y - m_rB.y * P.x + m_angularImpulse);
    } else {
        m_linearImpulse.setZero();
        m_angularImpulse = 0.0f;
    }
    pool.pushVec2(1);
    pool.pushMat22(1);
    pool.pushRot(2);
    // data.velocities[m_indexA].v = vA;
    data.velocities[m_indexA].w = wA;
    // data.velocities[m_indexB].v = vB;
    data.velocities[m_indexB].w = wB;
}
