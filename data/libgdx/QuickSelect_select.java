public int select(T[] items, Comparator<T> comp, int n, int size) {
    this.array = items;
    this.comp = comp;
    return recursiveSelect(0, size - 1, n);
}
