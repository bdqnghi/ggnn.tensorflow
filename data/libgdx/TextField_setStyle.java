public void setStyle(TextFieldStyle style) {
    if (style == null)
        throw new IllegalArgumentException("style cannot be null.");
    this.style = style;
    textHeight = style.font.getCapHeight() - style.font.getDescent() * 2;
    invalidateHierarchy();
}
