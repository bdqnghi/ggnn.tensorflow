/**
 * Destroy a particle. The particle is removed after the next step.
 *
 * @param Index of the particle to destroy.
 * @param Whether to call the destruction listener just before the particle is destroyed.
 */
public void destroyParticle(int index, boolean callDestructionListener) {
    m_particleSystem.destroyParticle(index, callDestructionListener);
}
