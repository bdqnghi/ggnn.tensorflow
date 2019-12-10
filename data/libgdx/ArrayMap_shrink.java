/**
 * Reduces the size of the backing arrays to the size of the actual number of entries. This is useful to release memory when
 * many items have been removed, or if it is known that more entries will not be added.
 */
public void shrink() {
    if (keys.length == size)
        return;
    resize(size);
}
