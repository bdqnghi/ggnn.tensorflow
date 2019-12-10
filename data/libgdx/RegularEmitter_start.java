@Override
public void start() {
    delay = delayValue.active ? delayValue.newLowValue() : 0;
    delayTimer = 0;
    durationTimer = 0f;
    duration = durationValue.newLowValue();
    percent = durationTimer / (float) duration;
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
}
