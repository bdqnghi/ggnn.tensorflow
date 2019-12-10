/**
 * Gets the previous item in the list
 *
 * @return the previous item in the list or null if there are no more items
 */
public T previous() {
    if (iter == null)
        return null;
    T payload = iter.payload;
    curr = iter;
    iter = iter.prev;
    return payload;
}
