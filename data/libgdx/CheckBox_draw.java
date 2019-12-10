public void draw(Batch batch, float parentAlpha) {
    Drawable checkbox = null;
    if (isDisabled()) {
        if (isChecked && style.checkboxOnDisabled != null)
            checkbox = style.checkboxOnDisabled;
        else
            checkbox = style.checkboxOffDisabled;
    }
    if (checkbox == null) {
        if (isChecked && style.checkboxOn != null)
            checkbox = style.checkboxOn;
        else if (isOver() && style.checkboxOver != null && !isDisabled())
            checkbox = style.checkboxOver;
        else
            checkbox = style.checkboxOff;
    }
    image.setDrawable(checkbox);
    super.draw(batch, parentAlpha);
}
