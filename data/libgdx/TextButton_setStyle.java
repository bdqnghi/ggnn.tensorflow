public void setStyle(ButtonStyle style) {
    if (style == null)
        throw new NullPointerException("style cannot be null");
    if (!(style instanceof TextButtonStyle))
        throw new IllegalArgumentException("style must be a TextButtonStyle.");
    super.setStyle(style);
    this.style = (TextButtonStyle) style;
    if (label != null) {
        TextButtonStyle textButtonStyle = (TextButtonStyle) style;
        LabelStyle labelStyle = label.getStyle();
        labelStyle.font = textButtonStyle.font;
        labelStyle.fontColor = textButtonStyle.fontColor;
        label.setStyle(labelStyle);
    }
}
