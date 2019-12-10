/**
 * @return The area of this {@link Ellipse} as {@link MathUtils#PI} * {@link Ellipse#width} * {@link Ellipse#height}
 */
public float area() {
    return MathUtils.PI * (this.width * this.height) / 4;
}
