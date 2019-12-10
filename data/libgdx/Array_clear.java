public void clear() {
    T[] items = this.items;
    for (int i = 0, n = size; i < n; i++) items[i] = null;
    size = 0;
}
