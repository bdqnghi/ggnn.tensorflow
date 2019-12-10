public float newLowValue() {
    return lowMin + (lowMax - lowMin) * MathUtils.random();
}
