/**
 * Returns an iterator for the keys in the set. Remove is supported. Note that the same iterator instance is returned each time
 * this method is called. Use the {@link IntSetIterator} constructor for nested or multithreaded iteration.
 */
public IntSetIterator iterator() {
    if (iterator1 == null) {
        iterator1 = new IntSetIterator(this);
        iterator2 = new IntSetIterator(this);
    }
    if (!iterator1.valid) {
        iterator1.reset();
        iterator1.valid = true;
        iterator2.valid = false;
        return iterator1;
    }
    iterator2.reset();
    iterator2.valid = true;
    iterator1.valid = false;
    return iterator2;
}
