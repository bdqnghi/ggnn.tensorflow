/**
 * Returns an iterator for the values in the map. Remove is supported. Note that the same iterator instance is returned each
 * time this method is called. Use the {@link Entries} constructor for nested or multithreaded iteration.
 */
public Values<V> values() {
    if (valuesIter1 == null) {
        valuesIter1 = new Values(this);
        valuesIter2 = new Values(this);
    }
    if (!valuesIter1.valid) {
        valuesIter1.index = 0;
        valuesIter1.valid = true;
        valuesIter2.valid = false;
        return valuesIter1;
    }
    valuesIter2.index = 0;
    valuesIter2.valid = true;
    valuesIter1.valid = false;
    return valuesIter2;
}
