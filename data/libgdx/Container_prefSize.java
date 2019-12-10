/**
 * Sets the prefWidth and prefHeight to the specified values.
 */
public Container<T> prefSize(float size) {
    prefSize(new Fixed(size));
    return this;
}
