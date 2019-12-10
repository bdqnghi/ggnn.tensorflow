/**
 * Sets the minWidth, prefWidth, maxWidth, minHeight, prefHeight, and maxHeight to the specified values.
 */
public Container<T> size(float width, float height) {
    size(new Fixed(width), new Fixed(height));
    return this;
}
