public void setDuration(int duration) {
    for (int i = 0, n = emitters.size; i < n; i++) {
        ParticleEmitter emitter = emitters.get(i);
        emitter.setContinuous(false);
        emitter.duration = duration;
        emitter.durationTimer = 0;
    }
}
