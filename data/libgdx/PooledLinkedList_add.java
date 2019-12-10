/**
 * Adds the specified object to the end of the list regardless of iteration status
 */
public void add(T object) {
    Item<T> item = pool.obtain();
    item.payload = object;
    item.next = null;
    item.prev = null;
    if (head == null) {
        head = item;
        tail = item;
        size++;
        return;
    }
    item.prev = tail;
    tail.next = item;
    tail = item;
    size++;
}
