/**
 * Returns the emitter with the specified name, or null.
 */
public ParticleEmitter findEmitter(String name) {
    for (int i = 0, n = emitters.size; i < n; i++) {
        ParticleEmitter emitter = emitters.get(i);
        if (emitter.getName().equals(name))
            return emitter;
    }
    return null;
}
