/**
 * Sets the minHeight, prefHeight, and maxHeight to the specified value.
 */
public Cell<T> height(float height) {
    height(new Fixed(height));
    return this;
}
