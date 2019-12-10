public T next() {
    if (index >= array.size)
        throw new NoSuchElementException(String.valueOf(index));
    if (!valid) {
        // System.out.println(iterable.lastAcquire);
        throw new GdxRuntimeException("#iterator() cannot be used nested.");
    }
    return array.items[index++];
}
