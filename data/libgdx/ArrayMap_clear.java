public void clear() {
    K[] keys = this.keys;
    V[] values = this.values;
    for (int i = 0, n = size; i < n; i++) {
        keys[i] = null;
        values[i] = null;
    }
    size = 0;
}
