/**
 * Sets the font's scale relative to the current scale.
 * @see #setScale(float, float)
 * @throws IllegalArgumentException if the resulting scale is zero.
 */
public void scale(float amount) {
    setScale(scaleX + amount, scaleY + amount);
}
