public K next() {
    if (!hasNext)
        throw new NoSuchElementException();
    if (!valid)
        throw new GdxRuntimeException("#iterator() cannot be used nested.");
    K key = map.keyTable[nextIndex];
    currentIndex = nextIndex;
    findNextIndex();
    return key;
}
