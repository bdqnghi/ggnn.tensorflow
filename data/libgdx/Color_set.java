/**
 * Sets this color's component values through an integer representation.
 *
 * @return this Color for chaining
 * @see #rgba8888ToColor(Color, int)
 */
public Color set(int rgba) {
    rgba8888ToColor(this, rgba);
    return this;
}
