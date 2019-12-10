/**
 * Returns the first selected item, or null.
 */
public T first() {
    return selected.size == 0 ? null : selected.first();
}
