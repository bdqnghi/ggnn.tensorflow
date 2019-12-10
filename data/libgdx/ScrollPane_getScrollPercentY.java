public float getScrollPercentY() {
    return MathUtils.clamp(amountY / maxY, 0, 1);
}
