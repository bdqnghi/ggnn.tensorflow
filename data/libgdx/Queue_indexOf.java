/**
 * Returns the index of first occurrence of value in the queue, or -1 if no such value exists.
 * @param identity If true, == comparison will be used. If false, .equals() comparison will be used.
 * @return An index of first occurrence of value in queue or -1 if no such value exists
 */
public int indexOf(T value, boolean identity) {
    if (size == 0)
        return -1;
    T[] values = this.values;
    int head = this.head, tail = this.tail;
    if (identity || value == null) {
        if (head < tail) {
            for (int i = head, n = tail; i < n; i++) if (values[i] == value)
                return i;
        } else {
            for (int i = head, n = values.length; i < n; i++) if (values[i] == value)
                return i - head;
            for (int i = 0, n = tail; i < n; i++) if (values[i] == value)
                return i + values.length - head;
        }
    } else {
        if (head < tail) {
            for (int i = head, n = tail; i < n; i++) if (value.equals(values[i]))
                return i;
        } else {
            for (int i = head, n = values.length; i < n; i++) if (value.equals(values[i]))
                return i - head;
            for (int i = 0, n = tail; i < n; i++) if (value.equals(values[i]))
                return i + values.length - head;
        }
    }
    return -1;
}
