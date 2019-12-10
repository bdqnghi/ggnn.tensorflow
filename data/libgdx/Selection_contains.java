public boolean contains(T item) {
    if (item == null)
        return false;
    return selected.contains(item);
}
