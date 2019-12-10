/**
 * Returns the backing array, which is guaranteed to not be modified before {@link #end()}.
 */
public T[] begin() {
    modified();
    snapshot = items;
    snapshots++;
    return items;
}
