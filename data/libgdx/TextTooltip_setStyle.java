public void setStyle(TextTooltipStyle style) {
    if (style == null)
        throw new NullPointerException("style cannot be null");
    if (!(style instanceof TextTooltipStyle))
        throw new IllegalArgumentException("style must be a TextTooltipStyle.");
    container.getActor().setStyle(style.label);
    container.setBackground(style.background);
    container.maxWidth(style.wrapWidth);
}
