/**
 * Sets the minimum and maximum vector to zeros.
 * @return This bounding box for chaining.
 */
public BoundingBox clr() {
    return this.set(min.set(0, 0, 0), max.set(0, 0, 0));
}
