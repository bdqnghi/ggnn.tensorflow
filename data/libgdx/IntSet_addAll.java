public void addAll(IntSet set) {
    ensureCapacity(set.size);
    IntSetIterator iterator = set.iterator();
    while (iterator.hasNext) add(iterator.next());
}
