/**
 * Returns an iterable for the selected items in the array. Remove is supported, but not between hasNext() and next(). Note
 * that the same iterable instance is returned each time this method is called. Use the {@link Predicate.PredicateIterable}
 * constructor for nested or multithreaded iteration.
 */
public Iterable<T> select(Predicate<T> predicate) {
    if (predicateIterable == null)
        predicateIterable = new Predicate.PredicateIterable<T>(this, predicate);
    else
        predicateIterable.set(this, predicate);
    return predicateIterable;
}
