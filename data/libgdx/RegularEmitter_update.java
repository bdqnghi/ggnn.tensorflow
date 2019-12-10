public void update() {
    int deltaMillis = (int) (controller.deltaTime * 1000);
    if (delayTimer < delay) {
        delayTimer += deltaMillis;
    } else {
        boolean emit = emissionMode != EmissionMode.Disabled;
        // End check
        if (durationTimer < duration) {
            durationTimer += deltaMillis;
            percent = durationTimer / (float) duration;
        } else {
            if (continuous && emit && emissionMode == EmissionMode.Enabled)
                controller.start();
            else
                emit = false;
        }
        if (emit) {
            // Emit particles
            emissionDelta += deltaMillis;
            float emissionTime = emission + emissionDiff * emissionValue.getScale(percent);
            if (emissionTime > 0) {
                emissionTime = 1000 / emissionTime;
                if (emissionDelta >= emissionTime) {
                    int emitCount = (int) (emissionDelta / emissionTime);
                    emitCount = Math.min(emitCount, maxParticleCount - controller.particles.size);
                    emissionDelta -= emitCount * emissionTime;
                    emissionDelta %= emissionTime;
                    addParticles(emitCount);
                }
            }
            if (controller.particles.size < minParticleCount)
                addParticles(minParticleCount - controller.particles.size);
        }
    }
    // Update particles
    int activeParticles = controller.particles.size;
    for (int i = 0, k = 0; i < controller.particles.size; ) {
        if ((lifeChannel.data[k + ParticleChannels.CurrentLifeOffset] -= deltaMillis) <= 0) {
            controller.particles.removeElement(i);
            continue;
        } else {
            lifeChannel.data[k + ParticleChannels.LifePercentOffset] = 1 - lifeChannel.data[k + ParticleChannels.CurrentLifeOffset] / lifeChannel.data[k + ParticleChannels.TotalLifeOffset];
        }
        ++i;
        k += lifeChannel.strideSize;
    }
    if (controller.particles.size < activeParticles) {
        controller.killParticles(controller.particles.size, activeParticles - controller.particles.size);
    }
}
