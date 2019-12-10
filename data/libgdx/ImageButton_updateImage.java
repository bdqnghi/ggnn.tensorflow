private void updateImage() {
    Drawable drawable = null;
    if (isDisabled() && style.imageDisabled != null)
        drawable = style.imageDisabled;
    else if (isPressed() && style.imageDown != null)
        drawable = style.imageDown;
    else if (isChecked && style.imageChecked != null)
        drawable = (style.imageCheckedOver != null && isOver()) ? style.imageCheckedOver : style.imageChecked;
    else if (isOver() && style.imageOver != null)
        drawable = style.imageOver;
    else if (// 
    style.imageUp != null)
        drawable = style.imageUp;
    image.setDrawable(drawable);
}
