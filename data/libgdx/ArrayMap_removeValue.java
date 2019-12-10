public boolean removeValue(V value, boolean identity) {
    Object[] values = this.values;
    if (identity || value == null) {
        for (int i = 0, n = size; i < n; i++) {
            if (values[i] == value) {
                removeIndex(i);
                return true;
            }
        }
    } else {
        for (int i = 0, n = size; i < n; i++) {
            if (value.equals(values[i])) {
                removeIndex(i);
                return true;
            }
        }
    }
    return false;
}
