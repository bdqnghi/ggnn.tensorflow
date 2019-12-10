/**
 * Sets the minWidth, prefWidth, maxWidth, minHeight, prefHeight, and maxHeight to the specified values.
 */
public Cell<T> size(float width, float height) {
    size(new Fixed(width), new Fixed(height));
    return this;
}
