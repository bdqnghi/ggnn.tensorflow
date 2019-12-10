@Override
public void solveVelocityConstraints(SolverData data) {
    final Vec2 vA = data.velocities[m_indexA].v;
    float wA = data.velocities[m_indexA].w;
    final Vec2 vB = data.velocities[m_indexB].v;
    float wB = data.velocities[m_indexB].w;
    float mA = m_invMassA, mB = m_invMassB;
    float iA = m_invIA, iB = m_invIB;
    float h = data.step.dt;
    float inv_h = data.step.inv_dt;
    final Vec2 temp = pool.popVec2();
    // Solve angular friction
    {
        float Cdot = wB - wA + inv_h * m_correctionFactor * m_angularError;
        float impulse = -m_angularMass * Cdot;
        float oldImpulse = m_angularImpulse;
        float maxImpulse = h * m_maxTorque;
        m_angularImpulse = MathUtils.clamp(m_angularImpulse + impulse, -maxImpulse, maxImpulse);
        impulse = m_angularImpulse - oldImpulse;
        wA -= iA * impulse;
        wB += iB * impulse;
    }
    final Vec2 Cdot = pool.popVec2();
    // Solve linear friction
    {
        // Cdot = vB + b2Cross(wB, m_rB) - vA - b2Cross(wA, m_rA) + inv_h * m_correctionFactor *
        // m_linearError;
        Cdot.x = vB.x + -wB * m_rB.y - vA.x - -wA * m_rA.y + inv_h * m_correctionFactor * m_linearError.x;
        Cdot.y = vB.y + wB * m_rB.x - vA.y - wA * m_rA.x + inv_h * m_correctionFactor * m_linearError.y;
        final Vec2 impulse = temp;
        Mat22.mulToOutUnsafe(m_linearMass, Cdot, impulse);
        impulse.negateLocal();
        final Vec2 oldImpulse = pool.popVec2();
        oldImpulse.set(m_linearImpulse);
        m_linearImpulse.addLocal(impulse);
        float maxImpulse = h * m_maxForce;
        if (m_linearImpulse.lengthSquared() > maxImpulse * maxImpulse) {
            m_linearImpulse.normalize();
            m_linearImpulse.mulLocal(maxImpulse);
        }
        impulse.x = m_linearImpulse.x - oldImpulse.x;
        impulse.y = m_linearImpulse.y - oldImpulse.y;
        vA.x -= mA * impulse.x;
        vA.y -= mA * impulse.y;
        wA -= iA * (m_rA.x * impulse.y - m_rA.y * impulse.x);
        vB.x += mB * impulse.x;
        vB.y += mB * impulse.y;
        wB += iB * (m_rB.x * impulse.y - m_rB.y * impulse.x);
    }
    pool.pushVec2(3);
    // data.velocities[m_indexA].v.set(vA);
    data.velocities[m_indexA].w = wA;
    // data.velocities[m_indexB].v.set(vB);
    data.velocities[m_indexB].w = wB;
}
