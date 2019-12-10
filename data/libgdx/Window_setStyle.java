public void setStyle(WindowStyle style) {
    if (style == null)
        throw new IllegalArgumentException("style cannot be null.");
    this.style = style;
    setBackground(style.background);
    titleLabel.setStyle(new LabelStyle(style.titleFont, style.titleFontColor));
    invalidateHierarchy();
}
