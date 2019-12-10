@SuppressWarnings("unchecked")
public final E[] pop(int argNum) {
    assert (argNum <= container.length) : "Container array is too small";
    if (index + argNum < size) {
        System.arraycopy(pool, index, container, 0, argNum);
        index += argNum;
    } else {
        int overlap = (index + argNum) - size;
        System.arraycopy(pool, index, container, 0, argNum - overlap);
        System.arraycopy(pool, 0, container, argNum - overlap, overlap);
        index = overlap;
    }
    return (E[]) container;
}
