public boolean isComplete() {
    for (int i = 0, n = emitters.size; i < n; i++) {
        ParticleEmitter emitter = emitters.get(i);
        if (!emitter.isComplete())
            return false;
    }
    return true;
}
