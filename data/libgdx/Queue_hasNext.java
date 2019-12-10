public boolean hasNext() {
    if (!valid) {
        // System.out.println(iterable.lastAcquire);
        throw new GdxRuntimeException("#iterator() cannot be used nested.");
    }
    return index < queue.size;
}
