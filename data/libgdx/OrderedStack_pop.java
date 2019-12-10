@SuppressWarnings("unchecked")
public final E[] pop(int argNum) {
    assert (index + argNum < size) : "End of stack reached, there is probably a leak somewhere";
    assert (argNum <= container.length) : "Container array is too small";
    System.arraycopy(pool, index, container, 0, argNum);
    index += argNum;
    return (E[]) container;
}
