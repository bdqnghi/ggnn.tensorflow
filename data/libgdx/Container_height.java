/**
 * Sets the minHeight, prefHeight, and maxHeight to the specified value.
 */
public Container<T> height(float height) {
    height(new Fixed(height));
    return this;
}
