public V next() {
    if (!hasNext)
        throw new NoSuchElementException();
    if (!valid)
        throw new GdxRuntimeException("#iterator() cannot be used nested.");
    V value = (V) map.get(keys.get(nextIndex));
    nextIndex++;
    hasNext = nextIndex < map.size;
    return value;
}
