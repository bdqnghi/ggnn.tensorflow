public void setScrollX(float pixels) {
    scrollX(MathUtils.clamp(pixels, 0, maxX));
}
