public void setStyle(LabelStyle style) {
    if (style == null)
        throw new IllegalArgumentException("style cannot be null.");
    if (style.font == null)
        throw new IllegalArgumentException("Missing LabelStyle font.");
    this.style = style;
    cache = style.font.newFontCache();
    invalidateHierarchy();
}
