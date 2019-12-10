public float getVisualScrollPercentY() {
    return MathUtils.clamp(visualAmountY / maxY, 0, 1);
}
