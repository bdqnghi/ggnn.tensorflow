/**
 * Sets the minWidth, prefWidth, and maxWidth to the specified value.
 */
public Container<T> width(float width) {
    width(new Fixed(width));
    return this;
}
