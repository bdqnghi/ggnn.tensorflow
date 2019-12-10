/**
 * Sets the prefWidth and prefHeight to the specified values.
 */
public Cell<T> prefSize(float size) {
    prefSize(new Fixed(size));
    return this;
}
