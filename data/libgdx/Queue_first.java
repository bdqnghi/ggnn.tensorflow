/**
 * Returns the first (head) item in the queue (without removing it).
 * @see #addFirst(Object)
 * @see #removeFirst()
 * @throws NoSuchElementException when queue is empty
 */
public T first() {
    if (size == 0) {
        // Underflow
        throw new NoSuchElementException("Queue is empty.");
    }
    return values[head];
}
