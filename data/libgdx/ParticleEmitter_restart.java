private void restart() {
    delay = delayValue.active ? delayValue.newLowValue() : 0;
    delayTimer = 0;
    durationTimer -= duration;
    duration = durationValue.newLowValue();
    emission = (int) emissionValue.newLowValue();
    emissionDiff = (int) emissionValue.newHighValue();
    if (!emissionValue.isRelative())
        emissionDiff -= emission;
    life = (int) lifeValue.newLowValue();
    lifeDiff = (int) lifeValue.newHighValue();
    if (!lifeValue.isRelative())
        lifeDiff -= life;
    lifeOffset = lifeOffsetValue.active ? (int) lifeOffsetValue.newLowValue() : 0;
    lifeOffsetDiff = (int) lifeOffsetValue.newHighValue();
    if (!lifeOffsetValue.isRelative())
        lifeOffsetDiff -= lifeOffset;
    spawnWidth = spawnWidthValue.newLowValue();
    spawnWidthDiff = spawnWidthValue.newHighValue();
    if (!spawnWidthValue.isRelative())
        spawnWidthDiff -= spawnWidth;
    spawnHeight = spawnHeightValue.newLowValue();
    spawnHeightDiff = spawnHeightValue.newHighValue();
    if (!spawnHeightValue.isRelative())
        spawnHeightDiff -= spawnHeight;
    updateFlags = 0;
    if (angleValue.active && angleValue.timeline.length > 1)
        updateFlags |= UPDATE_ANGLE;
    if (velocityValue.active)
        updateFlags |= UPDATE_VELOCITY;
    if (scaleValue.timeline.length > 1)
        updateFlags |= UPDATE_SCALE;
    if (rotationValue.active && rotationValue.timeline.length > 1)
        updateFlags |= UPDATE_ROTATION;
    if (windValue.active)
        updateFlags |= UPDATE_WIND;
    if (gravityValue.active)
        updateFlags |= UPDATE_GRAVITY;
    if (tintValue.timeline.length > 1)
        updateFlags |= UPDATE_TINT;
}
