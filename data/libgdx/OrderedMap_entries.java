/**
 * Returns an iterator for the entries in the map. Remove is supported. Note that the same iterator instance is returned each
 * time this method is called. Use the {@link OrderedMapEntries} constructor for nested or multithreaded iteration.
 */
public Entries<K, V> entries() {
    if (entries1 == null) {
        entries1 = new OrderedMapEntries(this);
        entries2 = new OrderedMapEntries(this);
    }
    if (!entries1.valid) {
        entries1.reset();
        entries1.valid = true;
        entries2.valid = false;
        return entries1;
    }
    entries2.reset();
    entries2.valid = true;
    entries1.valid = false;
    return entries2;
}
