/**
 * Sets the minWidth and minHeight to the specified values.
 */
public Cell<T> minSize(float width, float height) {
    minSize(new Fixed(width), new Fixed(height));
    return this;
}
