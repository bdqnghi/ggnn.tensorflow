public void record(float value) {
    longAvg = longAvg * (1 - LONG_FRACTION) + value * LONG_FRACTION;
    shortAvg = shortAvg * (1 - SHORT_FRACTION) + value * SHORT_FRACTION;
    min = MathUtils.min(value, min);
    max = MathUtils.max(value, max);
}
