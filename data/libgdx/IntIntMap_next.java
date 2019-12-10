public int next() {
    if (!hasNext)
        throw new NoSuchElementException();
    if (!valid)
        throw new GdxRuntimeException("#iterator() cannot be used nested.");
    int key = nextIndex == INDEX_ZERO ? 0 : map.keyTable[nextIndex];
    currentIndex = nextIndex;
    findNextIndex();
    return key;
}
