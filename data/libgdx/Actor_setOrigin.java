/**
 * Sets the origin position to the specified {@link Align alignment}.
 */
public void setOrigin(int alignment) {
    if ((alignment & left) != 0)
        originX = 0;
    else if ((alignment & right) != 0)
        originX = width;
    else
        originX = width / 2;
    if ((alignment & bottom) != 0)
        originY = 0;
    else if ((alignment & top) != 0)
        originY = height;
    else
        originY = height / 2;
}
