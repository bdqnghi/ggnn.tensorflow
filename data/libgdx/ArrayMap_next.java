public K next() {
    if (index >= map.size)
        throw new NoSuchElementException(String.valueOf(index));
    if (!valid)
        throw new GdxRuntimeException("#iterator() cannot be used nested.");
    return map.keys[index++];
}
