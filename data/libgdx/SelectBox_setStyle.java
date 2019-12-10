public void setStyle(SelectBoxStyle style) {
    if (style == null)
        throw new IllegalArgumentException("style cannot be null.");
    this.style = style;
    invalidateHierarchy();
}
