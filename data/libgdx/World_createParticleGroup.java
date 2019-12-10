/**
 * Create a particle group whose properties have been defined. No reference to the definition is
 * retained.
 *
 * @warning This function is locked during callbacks.
 */
public ParticleGroup createParticleGroup(ParticleGroupDef def) {
    assert (isLocked() == false);
    if (isLocked()) {
        return null;
    }
    ParticleGroup g = m_particleSystem.createParticleGroup(def);
    return g;
}
