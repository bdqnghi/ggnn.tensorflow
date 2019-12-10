/**
 * Append given object to the tail. (enqueue to tail) Unless backing array needs resizing, operates in O(1) time.
 * @param object can be null
 */
public void addLast(T object) {
    T[] values = this.values;
    if (size == values.length) {
        // * 2
        resize(values.length << 1);
        values = this.values;
    }
    values[tail++] = object;
    if (tail == values.length) {
        tail = 0;
    }
    size++;
}
