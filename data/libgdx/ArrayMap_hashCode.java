public int hashCode() {
    K[] keys = this.keys;
    V[] values = this.values;
    int h = 0;
    for (int i = 0, n = size; i < n; i++) {
        K key = keys[i];
        V value = values[i];
        if (key != null)
            h += key.hashCode() * 31;
        if (value != null)
            h += value.hashCode();
    }
    return h;
}
