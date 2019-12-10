/**
 * Returns an iterator for the keys in the map. Remove is supported. Note that the same iterator instance is returned each time
 * this method is called. Use the {@link OrderedMapKeys} constructor for nested or multithreaded iteration.
 */
public Keys<K> keys() {
    if (keys1 == null) {
        keys1 = new OrderedMapKeys(this);
        keys2 = new OrderedMapKeys(this);
    }
    if (!keys1.valid) {
        keys1.reset();
        keys1.valid = true;
        keys2.valid = false;
        return keys1;
    }
    keys2.reset();
    keys2.valid = true;
    keys1.valid = false;
    return keys2;
}
