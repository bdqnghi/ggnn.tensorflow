/**
 * @param identity If true, == comparison will be used. If false, .equals() comparison will be used.
 */
public boolean containsValue(V value, boolean identity) {
    V[] values = this.values;
    int i = size - 1;
    if (identity || value == null) {
        while (i >= 0) if (values[i--] == value)
            return true;
    } else {
        while (i >= 0) if (value.equals(values[i--]))
            return true;
    }
    return false;
}
