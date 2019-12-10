public void setStyle(ButtonStyle style) {
    if (!(style instanceof ImageButtonStyle))
        throw new IllegalArgumentException("style must be an ImageButtonStyle.");
    super.setStyle(style);
    this.style = (ImageButtonStyle) style;
    if (image != null)
        updateImage();
}
