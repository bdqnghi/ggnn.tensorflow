/**
 * This resets the mass properties to the sum of the mass properties of the fixtures. This
 * normally does not need to be called unless you called setMassData to override the mass and you
 * later want to reset the mass.
 */
public final void resetMassData() {
    // Compute mass data from shapes. Each shape has its own density.
    m_mass = 0.0f;
    m_invMass = 0.0f;
    m_I = 0.0f;
    m_invI = 0.0f;
    m_sweep.localCenter.setZero();
    // Static and kinematic bodies have zero mass.
    if (m_type == BodyType.STATIC || m_type == BodyType.KINEMATIC) {
        // m_sweep.c0 = m_sweep.c = m_xf.position;
        m_sweep.c0.set(m_xf.p);
        m_sweep.c.set(m_xf.p);
        m_sweep.a0 = m_sweep.a;
        return;
    }
    assert (m_type == BodyType.DYNAMIC);
    // Accumulate mass over all fixtures.
    final Vec2 localCenter = m_world.getPool().popVec2();
    localCenter.setZero();
    final Vec2 temp = m_world.getPool().popVec2();
    final MassData massData = pmd;
    for (Fixture f = m_fixtureList; f != null; f = f.m_next) {
        if (f.m_density == 0.0f) {
            continue;
        }
        f.getMassData(massData);
        m_mass += massData.mass;
        // center += massData.mass * massData.center;
        temp.set(massData.center).mulLocal(massData.mass);
        localCenter.addLocal(temp);
        m_I += massData.I;
    }
    // Compute center of mass.
    if (m_mass > 0.0f) {
        m_invMass = 1.0f / m_mass;
        localCenter.mulLocal(m_invMass);
    } else {
        // Force all dynamic bodies to have a positive mass.
        m_mass = 1.0f;
        m_invMass = 1.0f;
    }
    if (m_I > 0.0f && (m_flags & e_fixedRotationFlag) == 0) {
        // Center the inertia about the center of mass.
        m_I -= m_mass * Vec2.dot(localCenter, localCenter);
        assert (m_I > 0.0f);
        m_invI = 1.0f / m_I;
    } else {
        m_I = 0.0f;
        m_invI = 0.0f;
    }
    Vec2 oldCenter = m_world.getPool().popVec2();
    // Move center of mass.
    oldCenter.set(m_sweep.c);
    m_sweep.localCenter.set(localCenter);
    // m_sweep.c0 = m_sweep.c = Mul(m_xf, m_sweep.localCenter);
    Transform.mulToOutUnsafe(m_xf, m_sweep.localCenter, m_sweep.c0);
    m_sweep.c.set(m_sweep.c0);
    // Update center of mass velocity.
    // m_linearVelocity += Cross(m_angularVelocity, m_sweep.c - oldCenter);
    temp.set(m_sweep.c).subLocal(oldCenter);
    final Vec2 temp2 = oldCenter;
    Vec2.crossToOutUnsafe(m_angularVelocity, temp, temp2);
    m_linearVelocity.addLocal(temp2);
    m_world.getPool().pushVec2(3);
}
