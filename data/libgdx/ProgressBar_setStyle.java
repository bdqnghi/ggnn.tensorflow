public void setStyle(ProgressBarStyle style) {
    if (style == null)
        throw new IllegalArgumentException("style cannot be null.");
    this.style = style;
    invalidateHierarchy();
}
