/**
 * Remove the first item from the queue. (dequeue from head) Always O(1).
 * @return removed object
 * @throws NoSuchElementException when queue is empty
 */
public T removeFirst() {
    if (size == 0) {
        // Underflow
        throw new NoSuchElementException("Queue is empty.");
    }
    final T[] values = this.values;
    final T result = values[head];
    values[head] = null;
    head++;
    if (head == values.length) {
        head = 0;
    }
    size--;
    return result;
}
