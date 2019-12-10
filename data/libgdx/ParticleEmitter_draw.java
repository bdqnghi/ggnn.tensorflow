/**
 * Updates and draws the particles. This is slightly more efficient than calling {@link #update(float)} and
 * {@link #draw(Batch)} separately.
 */
public void draw(Batch batch, float delta) {
    accumulator += delta * 1000;
    if (accumulator < 1) {
        draw(batch);
        return;
    }
    int deltaMillis = (int) accumulator;
    accumulator -= deltaMillis;
    if (premultipliedAlpha) {
        batch.setBlendFunction(GL20.GL_ONE, GL20.GL_ONE_MINUS_SRC_ALPHA);
    } else if (additive) {
        batch.setBlendFunction(GL20.GL_SRC_ALPHA, GL20.GL_ONE);
    } else {
        batch.setBlendFunction(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
    }
    Particle[] particles = this.particles;
    boolean[] active = this.active;
    int activeCount = this.activeCount;
    for (int i = 0, n = active.length; i < n; i++) {
        if (active[i]) {
            Particle particle = particles[i];
            if (updateParticle(particle, delta, deltaMillis))
                particle.draw(batch);
            else {
                active[i] = false;
                activeCount--;
            }
        }
    }
    this.activeCount = activeCount;
    if (cleansUpBlendFunction && (additive || premultipliedAlpha))
        batch.setBlendFunction(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
    if (delayTimer < delay) {
        delayTimer += deltaMillis;
        return;
    }
    if (firstUpdate) {
        firstUpdate = false;
        addParticle();
    }
    if (durationTimer < duration)
        durationTimer += deltaMillis;
    else {
        if (!continuous || allowCompletion)
            return;
        restart();
    }
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
