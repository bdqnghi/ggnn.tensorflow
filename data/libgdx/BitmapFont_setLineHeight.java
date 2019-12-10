/**
 * Sets the line height, which is the distance from one line of text to the next.
 */
public void setLineHeight(float height) {
    lineHeight = height * scaleY;
    down = flipped ? lineHeight : -lineHeight;
}
