public boolean isEnabled(ParticleEmitter emitter) {
    ParticleData data = particleData.get(emitter);
    if (data == null)
        return true;
    return data.enabled;
}
