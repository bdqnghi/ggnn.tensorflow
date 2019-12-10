/**
 * Sets the background drawable and, if adjustPadding is true, sets the container's padding to
 * {@link Drawable#getBottomHeight()} , {@link Drawable#getTopHeight()}, {@link Drawable#getLeftWidth()}, and
 * {@link Drawable#getRightWidth()}.
 * @param background If null, the background will be cleared and padding removed.
 */
public void setBackground(Drawable background, boolean adjustPadding) {
    if (this.background == background)
        return;
    this.background = background;
    if (adjustPadding) {
        if (background == null)
            pad(Value.zero);
        else
            pad(background.getTopHeight(), background.getLeftWidth(), background.getBottomHeight(), background.getRightWidth());
        invalidate();
    }
}
