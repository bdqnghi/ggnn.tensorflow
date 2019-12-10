/**
 * Destroy particles in a group without enabling the destruction callback for destroyed particles.
 * This function is locked during callbacks.
 *
 * @param The particle group to destroy.
 * @warning This function is locked during callbacks.
 */
public void destroyParticlesInGroup(ParticleGroup group) {
    destroyParticlesInGroup(group, false);
}
