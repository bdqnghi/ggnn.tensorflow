public void setStyle(ButtonStyle style) {
    if (style == null)
        throw new IllegalArgumentException("style cannot be null.");
    this.style = style;
    Drawable background = null;
    if (isPressed() && !isDisabled()) {
        background = style.down == null ? style.up : style.down;
    } else {
        if (isDisabled() && style.disabled != null)
            background = style.disabled;
        else if (isChecked && style.checked != null)
            background = (isOver() && style.checkedOver != null) ? style.checkedOver : style.checked;
        else if (isOver() && style.over != null)
            background = style.over;
        else
            background = style.up;
    }
    setBackground(background);
}
