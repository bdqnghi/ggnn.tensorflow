/**
 * Sets the width and height.
 */
public void setSize(float width, float height) {
    if (this.width != width || this.height != height) {
        this.width = width;
        this.height = height;
        sizeChanged();
    }
}
