/**
 * Removes the first instance of the specified value in the array.
 * @param value May be null.
 * @param identity If true, == comparison will be used. If false, .equals() comparison will be used.
 * @return true if value was found and removed, false otherwise
 */
public boolean removeValue(T value, boolean identity) {
    T[] items = this.items;
    if (identity || value == null) {
        for (int i = 0, n = size; i < n; i++) {
            if (items[i] == value) {
                removeIndex(i);
                return true;
            }
        }
    } else {
        for (int i = 0, n = size; i < n; i++) {
            if (value.equals(items[i])) {
                removeIndex(i);
                return true;
            }
        }
    }
    return false;
}
