@Override
public void solveVelocityConstraints(final SolverData data) {
    Vec2 vB = data.velocities[m_indexB].v;
    float wB = data.velocities[m_indexB].w;
    // Cdot = v + cross(w, r)
    final Vec2 Cdot = pool.popVec2();
    Vec2.crossToOutUnsafe(wB, m_rB, Cdot);
    Cdot.addLocal(vB);
    final Vec2 impulse = pool.popVec2();
    final Vec2 temp = pool.popVec2();
    temp.set(m_impulse).mulLocal(m_gamma).addLocal(m_C).addLocal(Cdot).negateLocal();
    Mat22.mulToOutUnsafe(m_mass, temp, impulse);
    Vec2 oldImpulse = temp;
    oldImpulse.set(m_impulse);
    m_impulse.addLocal(impulse);
    float maxImpulse = data.step.dt * m_maxForce;
    if (m_impulse.lengthSquared() > maxImpulse * maxImpulse) {
        m_impulse.mulLocal(maxImpulse / m_impulse.length());
    }
    impulse.set(m_impulse).subLocal(oldImpulse);
    vB.x += m_invMassB * impulse.x;
    vB.y += m_invMassB * impulse.y;
    wB += m_invIB * Vec2.cross(m_rB, impulse);
    // data.velocities[m_indexB].v.set(vB);
    data.velocities[m_indexB].w = wB;
    pool.pushVec2(3);
}
