/**
 * Removes all values from this queue. Values in backing array are set to null to prevent memory leak, so this operates in
 * O(n).
 */
public void clear() {
    if (size == 0)
        return;
    final T[] values = this.values;
    final int head = this.head;
    final int tail = this.tail;
    if (head < tail) {
        // Continuous
        for (int i = head; i < tail; i++) {
            values[i] = null;
        }
    } else {
        // Wrapped
        for (int i = head; i < values.length; i++) {
            values[i] = null;
        }
        for (int i = 0; i < tail; i++) {
            values[i] = null;
        }
    }
    this.head = 0;
    this.tail = 0;
    this.size = 0;
}
