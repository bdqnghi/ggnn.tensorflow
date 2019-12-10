public void setStyle(ButtonStyle style) {
    if (!(style instanceof ImageTextButtonStyle))
        throw new IllegalArgumentException("style must be a ImageTextButtonStyle.");
    super.setStyle(style);
    this.style = (ImageTextButtonStyle) style;
    if (image != null)
        updateImage();
    if (label != null) {
        ImageTextButtonStyle textButtonStyle = (ImageTextButtonStyle) style;
        LabelStyle labelStyle = label.getStyle();
        labelStyle.font = textButtonStyle.font;
        labelStyle.fontColor = textButtonStyle.fontColor;
        label.setStyle(labelStyle);
    }
}
