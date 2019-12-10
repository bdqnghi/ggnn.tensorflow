public void setStyle(TreeStyle style) {
    this.style = style;
    indentSpacing = Math.max(style.plus.getMinWidth(), style.minus.getMinWidth()) + iconSpacingLeft;
}
