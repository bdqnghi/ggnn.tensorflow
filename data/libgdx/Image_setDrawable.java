public void setDrawable(Drawable drawable) {
    if (this.drawable == drawable)
        return;
    if (drawable != null) {
        if (getPrefWidth() != drawable.getMinWidth() || getPrefHeight() != drawable.getMinHeight())
            invalidateHierarchy();
    } else
        invalidateHierarchy();
    this.drawable = drawable;
}
