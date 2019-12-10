/**
 * Returns the key for the specified value. Note this does a comparison of each value in reverse order until the specified
 * value is found.
 * @param identity If true, == comparison will be used. If false, .equals() comparison will be used.
 */
public K getKey(V value, boolean identity) {
    Object[] values = this.values;
    int i = size - 1;
    if (identity || value == null) {
        for (; i >= 0; i--) if (values[i] == value)
            return keys[i];
    } else {
        for (; i >= 0; i--) if (value.equals(values[i]))
            return keys[i];
    }
    return null;
}
