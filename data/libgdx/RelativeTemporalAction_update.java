protected void update(float percent) {
    updateRelative(percent - lastPercent);
    lastPercent = percent;
}
