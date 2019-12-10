public <T> T select(T[] items, Comparator<T> comp, int kthLowest, int size) {
    int idx = selectIndex(items, comp, kthLowest, size);
    return items[idx];
}
