/**
 * Add x and y to current position
 */
public void moveBy(float x, float y) {
    if (x != 0 || y != 0) {
        this.x += x;
        this.y += y;
        positionChanged();
    }
}
