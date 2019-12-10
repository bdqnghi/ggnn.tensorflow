public void setStyle(ButtonStyle style) {
    if (!(style instanceof CheckBoxStyle))
        throw new IllegalArgumentException("style must be a CheckBoxStyle.");
    super.setStyle(style);
    this.style = (CheckBoxStyle) style;
}
