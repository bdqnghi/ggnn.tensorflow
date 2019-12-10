public T next() {
    if (index >= queue.size)
        throw new NoSuchElementException(String.valueOf(index));
    if (!valid) {
        // System.out.println(iterable.lastAcquire);
        throw new GdxRuntimeException("#iterator() cannot be used nested.");
    }
    return queue.get(index++);
}
