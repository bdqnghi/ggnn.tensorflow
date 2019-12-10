public void setStyle(ListStyle style) {
    if (style == null)
        throw new IllegalArgumentException("style cannot be null.");
    this.style = style;
    invalidateHierarchy();
}
