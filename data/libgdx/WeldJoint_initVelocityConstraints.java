@Override
public void initVelocityConstraints(final SolverData data) {
    m_indexA = m_bodyA.m_islandIndex;
    m_indexB = m_bodyB.m_islandIndex;
    m_localCenterA.set(m_bodyA.m_sweep.localCenter);
    m_localCenterB.set(m_bodyB.m_sweep.localCenter);
    m_invMassA = m_bodyA.m_invMass;
    m_invMassB = m_bodyB.m_invMass;
    m_invIA = m_bodyA.m_invI;
    m_invIB = m_bodyB.m_invI;
    // Vec2 cA = data.positions[m_indexA].c;
    float aA = data.positions[m_indexA].a;
    Vec2 vA = data.velocities[m_indexA].v;
    float wA = data.velocities[m_indexA].w;
    // Vec2 cB = data.positions[m_indexB].c;
    float aB = data.positions[m_indexB].a;
    Vec2 vB = data.velocities[m_indexB].v;
    float wB = data.velocities[m_indexB].w;
    final Rot qA = pool.popRot();
    final Rot qB = pool.popRot();
    final Vec2 temp = pool.popVec2();
    qA.set(aA);
    qB.set(aB);
    // Compute the effective masses.
    Rot.mulToOutUnsafe(qA, temp.set(m_localAnchorA).subLocal(m_localCenterA), m_rA);
    Rot.mulToOutUnsafe(qB, temp.set(m_localAnchorB).subLocal(m_localCenterB), m_rB);
    // J = [-I -r1_skew I r2_skew]
    // [ 0 -1 0 1]
    // r_skew = [-ry; rx]
    // Matlab
    // K = [ mA+r1y^2*iA+mB+r2y^2*iB, -r1y*iA*r1x-r2y*iB*r2x, -r1y*iA-r2y*iB]
    // [ -r1y*iA*r1x-r2y*iB*r2x, mA+r1x^2*iA+mB+r2x^2*iB, r1x*iA+r2x*iB]
    // [ -r1y*iA-r2y*iB, r1x*iA+r2x*iB, iA+iB]
    float mA = m_invMassA, mB = m_invMassB;
    float iA = m_invIA, iB = m_invIB;
    final Mat33 K = pool.popMat33();
    K.ex.x = mA + mB + m_rA.y * m_rA.y * iA + m_rB.y * m_rB.y * iB;
    K.ey.x = -m_rA.y * m_rA.x * iA - m_rB.y * m_rB.x * iB;
    K.ez.x = -m_rA.y * iA - m_rB.y * iB;
    K.ex.y = K.ey.x;
    K.ey.y = mA + mB + m_rA.x * m_rA.x * iA + m_rB.x * m_rB.x * iB;
    K.ez.y = m_rA.x * iA + m_rB.x * iB;
    K.ex.z = K.ez.x;
    K.ey.z = K.ez.y;
    K.ez.z = iA + iB;
    if (m_frequencyHz > 0.0f) {
        K.getInverse22(m_mass);
        float invM = iA + iB;
        float m = invM > 0.0f ? 1.0f / invM : 0.0f;
        float C = aB - aA - m_referenceAngle;
        // Frequency
        float omega = 2.0f * MathUtils.PI * m_frequencyHz;
        // Damping coefficient
        float d = 2.0f * m * m_dampingRatio * omega;
        // Spring stiffness
        float k = m * omega * omega;
        // magic formulas
        float h = data.step.dt;
        m_gamma = h * (d + h * k);
        m_gamma = m_gamma != 0.0f ? 1.0f / m_gamma : 0.0f;
        m_bias = C * h * k * m_gamma;
        invM += m_gamma;
        m_mass.ez.z = invM != 0.0f ? 1.0f / invM : 0.0f;
    } else {
        K.getSymInverse33(m_mass);
        m_gamma = 0.0f;
        m_bias = 0.0f;
    }
    if (data.step.warmStarting) {
        final Vec2 P = pool.popVec2();
        // Scale impulses to support a variable time step.
        m_impulse.mulLocal(data.step.dtRatio);
        P.set(m_impulse.x, m_impulse.y);
        vA.x -= mA * P.x;
        vA.y -= mA * P.y;
        wA -= iA * (Vec2.cross(m_rA, P) + m_impulse.z);
        vB.x += mB * P.x;
        vB.y += mB * P.y;
        wB += iB * (Vec2.cross(m_rB, P) + m_impulse.z);
        pool.pushVec2(1);
    } else {
        m_impulse.setZero();
    }
    // data.velocities[m_indexA].v.set(vA);
    data.velocities[m_indexA].w = wA;
    // data.velocities[m_indexB].v.set(vB);
    data.velocities[m_indexB].w = wB;
    pool.pushVec2(1);
    pool.pushRot(2);
    pool.pushMat33(1);
}
