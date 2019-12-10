@Override
public T next() {
    if (next == null && !hasNext())
        return null;
    final T result = next;
    next = null;
    peeked = false;
    return result;
}
