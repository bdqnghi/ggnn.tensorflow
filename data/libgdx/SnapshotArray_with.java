/**
 * @see #SnapshotArray(Object[])
 */
static public <T> SnapshotArray<T> with(T... array) {
    return new SnapshotArray(array);
}
