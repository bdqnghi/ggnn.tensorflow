@Override
public Iterator<T> iterator() {
    if (iterator1 == null) {
        iterator1 = new ReadonlyIterator(array);
        iterator2 = new ReadonlyIterator(array);
    }
    if (!iterator1.valid) {
        iterator1.index = 0;
        iterator1.valid = true;
        iterator2.valid = false;
        return iterator1;
    }
    iterator2.index = 0;
    iterator2.valid = true;
    iterator1.valid = false;
    return iterator2;
}
