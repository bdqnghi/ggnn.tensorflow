/**
 * Returns if this array contains value.
 * @param value May be null.
 * @param identity If true, == comparison will be used. If false, .equals() comparison will be used.
 * @return true if array contains value, false if it doesn't
 */
public boolean contains(T value, boolean identity) {
    T[] items = this.items;
    int i = size - 1;
    if (identity || value == null) {
        while (i >= 0) if (items[i--] == value)
            return true;
    } else {
        while (i >= 0) if (value.equals(items[i--]))
            return true;
    }
    return false;
}
