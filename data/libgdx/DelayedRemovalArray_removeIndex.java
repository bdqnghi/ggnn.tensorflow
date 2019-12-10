public T removeIndex(int index) {
    if (iterating > 0) {
        remove(index);
        return get(index);
    }
    return super.removeIndex(index);
}
