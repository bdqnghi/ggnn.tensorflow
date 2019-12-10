public float getScrollPercentX() {
    return MathUtils.clamp(amountX / maxX, 0, 1);
}
