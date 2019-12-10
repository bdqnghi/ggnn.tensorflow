public void setScrollPercentX(float percentX) {
    scrollX(maxX * MathUtils.clamp(percentX, 0, 1));
}
