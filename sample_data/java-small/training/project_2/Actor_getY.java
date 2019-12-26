/**
 * Returns the Y position of the specified {@link Align alignment}.
 */
public float getY(int alignment) {
    float y = this.y;
    if ((alignment & top) != 0)
        y += height;
    else if (// 
    (alignment & bottom) == 0)
        y += height / 2;
    return y;
}
