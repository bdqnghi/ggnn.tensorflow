/**
 * Gets the next item in the list
 *
 * @return the next item in the list or null if there are no more items
 */
public T next() {
    if (iter == null)
        return null;
    T payload = iter.payload;
    curr = iter;
    iter = iter.next;
    return payload;
}
