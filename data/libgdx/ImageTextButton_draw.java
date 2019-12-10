public void draw(Batch batch, float parentAlpha) {
    updateImage();
    Color fontColor;
    if (isDisabled() && style.disabledFontColor != null)
        fontColor = style.disabledFontColor;
    else if (isPressed() && style.downFontColor != null)
        fontColor = style.downFontColor;
    else if (isChecked && style.checkedFontColor != null)
        fontColor = (isOver() && style.checkedOverFontColor != null) ? style.checkedOverFontColor : style.checkedFontColor;
    else if (isOver() && style.overFontColor != null)
        fontColor = style.overFontColor;
    else
        fontColor = style.fontColor;
    if (fontColor != null)
        label.getStyle().fontColor = fontColor;
    super.draw(batch, parentAlpha);
}
