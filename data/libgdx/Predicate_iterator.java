/**
 * Returns an iterator. Note that the same iterator instance is returned each time this method is called. Use the
 * {@link Predicate.PredicateIterator} constructor for nested or multithreaded iteration.
 */
@Override
public Iterator<T> iterator() {
    if (iterator == null)
        iterator = new PredicateIterator<T>(iterable.iterator(), predicate);
    else
        iterator.set(iterable.iterator(), predicate);
    return iterator;
}
