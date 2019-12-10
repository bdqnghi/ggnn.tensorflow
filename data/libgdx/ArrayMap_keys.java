/**
 * Returns an iterator for the keys in the map. Remove is supported. Note that the same iterator instance is returned each time
 * this method is called. Use the {@link Entries} constructor for nested or multithreaded iteration.
 */
public Keys<K> keys() {
    if (keysIter1 == null) {
        keysIter1 = new Keys(this);
        keysIter2 = new Keys(this);
    }
    if (!keysIter1.valid) {
        keysIter1.index = 0;
        keysIter1.valid = true;
        keysIter2.valid = false;
        return keysIter1;
    }
    keysIter2.index = 0;
    keysIter2.valid = true;
    keysIter1.valid = false;
    return keysIter2;
}
