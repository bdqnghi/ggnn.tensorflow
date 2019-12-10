/**
 * Sets the minimum and maximum vector to positive and negative infinity.
 *
 * @return This bounding box for chaining.
 */
public BoundingBox inf() {
    min.set(Float.POSITIVE_INFINITY, Float.POSITIVE_INFINITY, Float.POSITIVE_INFINITY);
    max.set(Float.NEGATIVE_INFINITY, Float.NEGATIVE_INFINITY, Float.NEGATIVE_INFINITY);
    cnt.set(0, 0, 0);
    dim.set(0, 0, 0);
    return this;
}
