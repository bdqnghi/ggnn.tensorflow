/**
 * A convenience method for setting the font color. The color can also be set by modifying {@link #getColor()}.
 */
public void setColor(float r, float g, float b, float a) {
    cache.getColor().set(r, g, b, a);
}
