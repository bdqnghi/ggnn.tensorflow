/**
 * Damping is used to reduce the velocity of particles. The damping parameter can be larger than
 * 1.0f but the damping effect becomes sensitive to the time step when the damping parameter is
 * large.
 *
 * @param damping
 */
public void setParticleDamping(float damping) {
    m_particleSystem.setParticleDamping(damping);
}
