public T next() {
    if (!hasNext)
        throw new NoSuchElementException();
    if (!valid)
        throw new GdxRuntimeException("#iterator() cannot be used nested.");
    T key = items.get(nextIndex);
    nextIndex++;
    hasNext = nextIndex < set.size;
    return key;
}
