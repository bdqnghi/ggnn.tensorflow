/**
 * Sets the maxWidth and maxHeight to the specified values.
 */
public Container<T> maxSize(float width, float height) {
    maxSize(new Fixed(width), new Fixed(height));
    return this;
}
