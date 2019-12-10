public void setEnabled(ParticleEmitter emitter, boolean enabled) {
    ParticleData data = particleData.get(emitter);
    if (data == null)
        particleData.put(emitter, data = new ParticleData());
    data.enabled = enabled;
    emitter.reset();
}
