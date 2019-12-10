@Override
public boolean hasNext() {
    if (end)
        return false;
    if (next != null)
        return true;
    peeked = true;
    while (iterator.hasNext()) {
        final T n = iterator.next();
        if (predicate.evaluate(n)) {
            next = n;
            return true;
        }
    }
    end = true;
    return false;
}
