public void setScrollY(float pixels) {
    scrollY(MathUtils.clamp(pixels, 0, maxY));
}
