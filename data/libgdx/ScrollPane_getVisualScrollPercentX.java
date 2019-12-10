public float getVisualScrollPercentX() {
    return MathUtils.clamp(visualAmountX / maxX, 0, 1);
}
