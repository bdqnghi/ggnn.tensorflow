public void setScrollPercentY(float percentY) {
    scrollY(maxY * MathUtils.clamp(percentY, 0, 1));
}
