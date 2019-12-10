public void update(float delta) {
    accumulator += delta * 1000;
    if (accumulator < 1)
        return;
    int deltaMillis = (int) accumulator;
    accumulator -= deltaMillis;
    if (delayTimer < delay) {
        delayTimer += deltaMillis;
    } else {
        boolean done = false;
        if (firstUpdate) {
            firstUpdate = false;
            addParticle();
        }
        if (durationTimer < duration)
            durationTimer += deltaMillis;
        else {
            if (!continuous || allowCompletion)
                done = true;
            else
                restart();
        }
        if (!done) {
            emissionDelta += deltaMillis;
            float emissionTime = emission + emissionDiff * emissionValue.getScale(durationTimer / (float) duration);
            if (emissionTime > 0) {
                emissionTime = 1000 / emissionTime;
                if (emissionDelta >= emissionTime) {
                    int emitCount = (int) (emissionDelta / emissionTime);
                    emitCount = Math.min(emitCount, maxParticleCount - activeCount);
                    emissionDelta -= emitCount * emissionTime;
                    emissionDelta %= emissionTime;
                    addParticles(emitCount);
                }
            }
            if (activeCount < minParticleCount)
                addParticles(minParticleCount - activeCount);
        }
    }
    boolean[] active = this.active;
    int activeCount = this.activeCount;
    Particle[] particles = this.particles;
    for (int i = 0, n = active.length; i < n; i++) {
        if (active[i] && !updateParticle(particles[i], delta, deltaMillis)) {
            active[i] = false;
            activeCount--;
        }
    }
    this.activeCount = activeCount;
}
