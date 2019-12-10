/**
 * Returns an iterator for the entries in the map. Remove is supported. Note that the same iterator instance is returned each
 * time this method is called. Use the {@link Entries} constructor for nested or multithreaded iteration.
 */
public Entries<K, V> entries() {
    if (entries1 == null) {
        entries1 = new Entries(this);
        entries2 = new Entries(this);
    }
    if (!entries1.valid) {
        entries1.index = 0;
        entries1.valid = true;
        entries2.valid = false;
        return entries1;
    }
    entries2.index = 0;
    entries2.valid = true;
    entries1.valid = false;
    return entries2;
}
