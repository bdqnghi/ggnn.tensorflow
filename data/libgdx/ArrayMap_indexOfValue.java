public int indexOfValue(V value, boolean identity) {
    Object[] values = this.values;
    if (identity || value == null) {
        for (int i = 0, n = size; i < n; i++) if (values[i] == value)
            return i;
    } else {
        for (int i = 0, n = size; i < n; i++) if (value.equals(values[i]))
            return i;
    }
    return -1;
}
