@Override
public void solveVelocityConstraints(final SolverData data) {
    Vec2 vA = data.velocities[m_indexA].v;
    float wA = data.velocities[m_indexA].w;
    Vec2 vB = data.velocities[m_indexB].v;
    float wB = data.velocities[m_indexB].w;
    float mA = m_invMassA, mB = m_invMassB;
    float iA = m_invIA, iB = m_invIB;
    final Vec2 Cdot1 = pool.popVec2();
    final Vec2 P = pool.popVec2();
    final Vec2 temp = pool.popVec2();
    if (m_frequencyHz > 0.0f) {
        float Cdot2 = wB - wA;
        float impulse2 = -m_mass.ez.z * (Cdot2 + m_bias + m_gamma * m_impulse.z);
        m_impulse.z += impulse2;
        wA -= iA * impulse2;
        wB += iB * impulse2;
        Vec2.crossToOutUnsafe(wB, m_rB, Cdot1);
        Vec2.crossToOutUnsafe(wA, m_rA, temp);
        Cdot1.addLocal(vB).subLocal(vA).subLocal(temp);
        final Vec2 impulse1 = P;
        Mat33.mul22ToOutUnsafe(m_mass, Cdot1, impulse1);
        impulse1.negateLocal();
        m_impulse.x += impulse1.x;
        m_impulse.y += impulse1.y;
        vA.x -= mA * P.x;
        vA.y -= mA * P.y;
        wA -= iA * Vec2.cross(m_rA, P);
        vB.x += mB * P.x;
        vB.y += mB * P.y;
        wB += iB * Vec2.cross(m_rB, P);
    } else {
        Vec2.crossToOutUnsafe(wA, m_rA, temp);
        Vec2.crossToOutUnsafe(wB, m_rB, Cdot1);
        Cdot1.addLocal(vB).subLocal(vA).subLocal(temp);
        float Cdot2 = wB - wA;
        final Vec3 Cdot = pool.popVec3();
        Cdot.set(Cdot1.x, Cdot1.y, Cdot2);
        final Vec3 impulse = pool.popVec3();
        Mat33.mulToOutUnsafe(m_mass, Cdot, impulse);
        impulse.negateLocal();
        m_impulse.addLocal(impulse);
        P.set(impulse.x, impulse.y);
        vA.x -= mA * P.x;
        vA.y -= mA * P.y;
        wA -= iA * (Vec2.cross(m_rA, P) + impulse.z);
        vB.x += mB * P.x;
        vB.y += mB * P.y;
        wB += iB * (Vec2.cross(m_rB, P) + impulse.z);
        pool.pushVec3(2);
    }
    // data.velocities[m_indexA].v.set(vA);
    data.velocities[m_indexA].w = wA;
    // data.velocities[m_indexB].v.set(vB);
    data.velocities[m_indexB].w = wB;
    pool.pushVec2(3);
}
