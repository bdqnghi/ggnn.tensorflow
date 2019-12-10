/**
 * Scales the font by the specified amount in both directions.
 * @see #setScale(float, float)
 * @throws IllegalArgumentException if scaleX or scaleY is zero.
 */
public void setScale(float scaleXY) {
    setScale(scaleXY, scaleXY);
}
