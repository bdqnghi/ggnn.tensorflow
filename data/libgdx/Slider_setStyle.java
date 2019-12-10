public void setStyle(SliderStyle style) {
    if (style == null)
        throw new NullPointerException("style cannot be null");
    if (!(style instanceof SliderStyle))
        throw new IllegalArgumentException("style must be a SliderStyle.");
    super.setStyle(style);
}
