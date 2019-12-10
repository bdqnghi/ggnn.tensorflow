/**
 * Prepend given object to the head. (enqueue to head) Unless backing array needs resizing, operates in O(1) time.
 * @see #addLast(Object)
 * @param object can be null
 */
public void addFirst(T object) {
    T[] values = this.values;
    if (size == values.length) {
        // * 2
        resize(values.length << 1);
        values = this.values;
    }
    int head = this.head;
    head--;
    if (head == -1) {
        head = values.length - 1;
    }
    values[head] = object;
    this.head = head;
    this.size++;
}
