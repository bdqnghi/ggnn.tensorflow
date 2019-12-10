/**
 * Returns an iterator for the values in the map. Remove is supported. Note that the same iterator instance is returned each
 * time this method is called. Use the {@link Values} constructor for nested or multithreaded iteration.
 */
public Values<V> values() {
    if (values1 == null) {
        values1 = new Values(this);
        values2 = new Values(this);
    }
    if (!values1.valid) {
        values1.reset();
        values1.valid = true;
        values2.valid = false;
        return values1;
    }
    values2.reset();
    values2.valid = true;
    values1.valid = false;
    return values2;
}
