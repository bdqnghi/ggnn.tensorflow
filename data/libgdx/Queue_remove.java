public void remove() {
    if (!allowRemove)
        throw new GdxRuntimeException("Remove not allowed.");
    index--;
    queue.removeIndex(index);
}
