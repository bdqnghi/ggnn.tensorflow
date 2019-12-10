public void remove() {
    if (!allowRemove)
        throw new GdxRuntimeException("Remove not allowed.");
    index--;
    array.removeIndex(index);
}
