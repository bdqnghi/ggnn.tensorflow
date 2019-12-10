/**
 * Get the central rotational inertia of the body.
 *
 * @return the rotational inertia, usually in kg-m^2.
 */
public final float getInertia() {
    return m_I + m_mass * (m_sweep.localCenter.x * m_sweep.localCenter.x + m_sweep.localCenter.y * m_sweep.localCenter.y);
}
