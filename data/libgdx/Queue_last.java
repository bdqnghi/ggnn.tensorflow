/**
 * Returns the last (tail) item in the queue (without removing it).
 * @see #addLast(Object)
 * @see #removeLast()
 * @throws NoSuchElementException when queue is empty
 */
public T last() {
    if (size == 0) {
        // Underflow
        throw new NoSuchElementException("Queue is empty.");
    }
    final T[] values = this.values;
    int tail = this.tail;
    tail--;
    if (tail == -1) {
        tail = values.length - 1;
    }
    return values[tail];
}
