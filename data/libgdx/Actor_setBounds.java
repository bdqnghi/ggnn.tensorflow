/**
 * Set bounds the x, y, width, and height.
 */
public void setBounds(float x, float y, float width, float height) {
    if (this.x != x || this.y != y) {
        this.x = x;
        this.y = y;
        positionChanged();
    }
    if (this.width != width || this.height != height) {
        this.width = width;
        this.height = height;
        sizeChanged();
    }
}
