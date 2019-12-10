/**
 * Get the mass data of the body. The rotational inertia is relative to the center of mass.
 *
 * @return a struct containing the mass, inertia and center of the body.
 */
public final void getMassData(MassData data) {
    // data.mass = m_mass;
    // data.I = m_I + m_mass * Vec2.dot(m_sweep.localCenter, m_sweep.localCenter);
    // data.center.set(m_sweep.localCenter);
    data.mass = m_mass;
    data.I = m_I + m_mass * (m_sweep.localCenter.x * m_sweep.localCenter.x + m_sweep.localCenter.y * m_sweep.localCenter.y);
    data.center.x = m_sweep.localCenter.x;
    data.center.y = m_sweep.localCenter.y;
}
