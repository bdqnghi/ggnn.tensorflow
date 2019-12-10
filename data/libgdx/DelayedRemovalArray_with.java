/**
 * @see #DelayedRemovalArray(Object[])
 */
static public <T> DelayedRemovalArray<T> with(T... array) {
    return new DelayedRemovalArray(array);
}
