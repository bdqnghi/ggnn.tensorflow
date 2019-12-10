public float newHighValue() {
    return highMin + (highMax - highMin) * MathUtils.random();
}
