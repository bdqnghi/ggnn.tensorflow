/**
 * Clears list
 */
public void clear() {
    for (; first != null; first = first.n) {
        nodePool.free(first);
    }
    size = 0;
}
