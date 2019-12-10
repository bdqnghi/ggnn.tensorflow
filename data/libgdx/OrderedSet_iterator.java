public OrderedSetIterator<T> iterator() {
    if (iterator1 == null) {
        iterator1 = new OrderedSetIterator(this);
        iterator2 = new OrderedSetIterator(this);
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
