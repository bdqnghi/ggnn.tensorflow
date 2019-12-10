/**
 * Removes the current list item based on the iterator position.
 */
public void remove() {
    if (curr == null)
        return;
    size--;
    pool.free(curr);
    Item<T> c = curr;
    Item<T> n = curr.next;
    Item<T> p = curr.prev;
    curr = null;
    if (size == 0) {
        head = null;
        tail = null;
        return;
    }
    if (c == head) {
        n.prev = null;
        head = n;
        return;
    }
    if (c == tail) {
        p.next = null;
        tail = p;
        return;
    }
    p.next = n;
    n.prev = p;
}
