/**
 * Adds the specified size to the current size.
 */
public void sizeBy(float width, float height) {
    if (width != 0 || height != 0) {
        this.width += width;
        this.height += height;
        sizeChanged();
    }
}
