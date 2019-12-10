/**
 * Create a particle whose properties have been defined. No reference to the definition is
 * retained. A simulation step must occur before it's possible to interact with a newly created
 * particle. For example, DestroyParticleInShape() will not destroy a particle until Step() has
 * been called.
 *
 * @warning This function is locked during callbacks.
 * @return the index of the particle.
 */
public int createParticle(ParticleDef def) {
    assert (isLocked() == false);
    if (isLocked()) {
        return 0;
    }
    int p = m_particleSystem.createParticle(def);
    return p;
}
