/**
 * Approximates the circumference of this {@link Ellipse}. Oddly enough, the circumference of an ellipse is actually difficult
 * to compute exactly.
 * @return The Ramanujan approximation to the circumference of an ellipse if one dimension is at least three times longer than
 *         the other, else the simpler approximation
 */
public float circumference() {
    float a = this.width / 2;
    float b = this.height / 2;
    if (a * 3 > b || b * 3 > a) {
        // If one dimension is three times as long as the other...
        return (float) (MathUtils.PI * ((3 * (a + b)) - Math.sqrt((3 * a + b) * (a + 3 * b))));
    } else {
        // We can use the simpler approximation, then
        return (float) (MathUtils.PI2 * Math.sqrt((a * a + b * b) / 2));
    }
}
