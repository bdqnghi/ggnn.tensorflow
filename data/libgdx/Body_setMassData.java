/**
 * Set the mass properties to override the mass properties of the fixtures. Note that this changes
 * the center of mass position. Note that creating or destroying fixtures can also alter the mass.
 * This function has no effect if the body isn't dynamic.
 *
 * @param massData the mass properties.
 */
public final void setMassData(MassData massData) {
    // TODO_ERIN adjust linear velocity and torque to account for movement of center.
    assert (m_world.isLocked() == false);
    if (m_world.isLocked() == true) {
        return;
    }
    if (m_type != BodyType.DYNAMIC) {
        return;
    }
    m_invMass = 0.0f;
    m_I = 0.0f;
    m_invI = 0.0f;
    m_mass = massData.mass;
    if (m_mass <= 0.0f) {
        m_mass = 1f;
    }
    m_invMass = 1.0f / m_mass;
    if (massData.I > 0.0f && (m_flags & e_fixedRotationFlag) == 0) {
        m_I = massData.I - m_mass * Vec2.dot(massData.center, massData.center);
        assert (m_I > 0.0f);
        m_invI = 1.0f / m_I;
    }
    final Vec2 oldCenter = m_world.getPool().popVec2();
    // Move center of mass.
    oldCenter.set(m_sweep.c);
    m_sweep.localCenter.set(massData.center);
    // m_sweep.c0 = m_sweep.c = Mul(m_xf, m_sweep.localCenter);
    Transform.mulToOutUnsafe(m_xf, m_sweep.localCenter, m_sweep.c0);
    m_sweep.c.set(m_sweep.c0);
    // Update center of mass velocity.
    // m_linearVelocity += Cross(m_angularVelocity, m_sweep.c - oldCenter);
    final Vec2 temp = m_world.getPool().popVec2();
    temp.set(m_sweep.c).subLocal(oldCenter);
    Vec2.crossToOut(m_angularVelocity, temp, temp);
    m_linearVelocity.addLocal(temp);
    m_world.getPool().pushVec2(2);
}
