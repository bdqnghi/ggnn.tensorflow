/**
 * Remove the last item from the queue. (dequeue from tail) Always O(1).
 * @see #removeFirst()
 * @return removed object
 * @throws NoSuchElementException when queue is empty
 */
public T removeLast() {
    if (size == 0) {
        throw new NoSuchElementException("Queue is empty.");
    }
    final T[] values = this.values;
    int tail = this.tail;
    tail--;
    if (tail == -1) {
        tail = values.length - 1;
    }
    final T result = values[tail];
    values[tail] = null;
    this.tail = tail;
    size--;
    return result;
}
