/**
 * Returns the index of first occurrence of value in the array, or -1 if no such value exists.
 * @param value May be null.
 * @param identity If true, == comparison will be used. If false, .equals() comparison will be used.
 * @return An index of first occurrence of value in array or -1 if no such value exists
 */
public int indexOf(T value, boolean identity) {
    T[] items = this.items;
    if (identity || value == null) {
        for (int i = 0, n = size; i < n; i++) if (items[i] == value)
            return i;
    } else {
        for (int i = 0, n = size; i < n; i++) if (value.equals(items[i]))
            return i;
    }
    return -1;
}
