/**
 * Returns an index of last occurrence of value in array or -1 if no such value exists. Search is started from the end of an
 * array.
 * @param value May be null.
 * @param identity If true, == comparison will be used. If false, .equals() comparison will be used.
 * @return An index of last occurrence of value in array or -1 if no such value exists
 */
public int lastIndexOf(T value, boolean identity) {
    T[] items = this.items;
    if (identity || value == null) {
        for (int i = size - 1; i >= 0; i--) if (items[i] == value)
            return i;
    } else {
        for (int i = size - 1; i >= 0; i--) if (value.equals(items[i]))
            return i;
    }
    return -1;
}
