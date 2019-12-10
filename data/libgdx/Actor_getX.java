/**
 * Returns the X position of the specified {@link Align alignment}.
 */
public float getX(int alignment) {
    float x = this.x;
    if ((alignment & right) != 0)
        x += width;
    else if (// 
    (alignment & left) == 0)
        x += width / 2;
    return x;
}
