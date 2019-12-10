/**
 * Sets the position using the specified {@link Align alignment}. Note this may set the position to non-integer
 * coordinates.
 */
public void setPosition(float x, float y, int alignment) {
    if ((alignment & right) != 0)
        x -= width;
    else if (// 
    (alignment & left) == 0)
        x -= width / 2;
    if ((alignment & top) != 0)
        y -= height;
    else if (// 
    (alignment & bottom) == 0)
        y -= height / 2;
    if (this.x != x || this.y != y) {
        this.x = x;
        this.y = y;
        positionChanged();
    }
}
