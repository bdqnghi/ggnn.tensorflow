public void set(RegularEmitter emitter) {
    super.set(emitter);
    delayValue.load(emitter.delayValue);
    durationValue.load(emitter.durationValue);
    lifeOffsetValue.load(emitter.lifeOffsetValue);
    lifeValue.load(emitter.lifeValue);
    emissionValue.load(emitter.emissionValue);
    emission = emitter.emission;
    emissionDiff = emitter.emissionDiff;
    emissionDelta = emitter.emissionDelta;
    lifeOffset = emitter.lifeOffset;
    lifeOffsetDiff = emitter.lifeOffsetDiff;
    life = emitter.life;
    lifeDiff = emitter.lifeDiff;
    duration = emitter.duration;
    delay = emitter.delay;
    durationTimer = emitter.durationTimer;
    delayTimer = emitter.delayTimer;
    continuous = emitter.continuous;
}
