/**
 * Puts the specified object in the pool, making it eligible to be returned by {@link #obtain()}. If the pool already contains
 * {@link #max} free objects, the specified object is reset but not added to the pool.
 */
public void free(T object) {
    if (object == null)
        throw new IllegalArgumentException("object cannot be null.");
    if (freeObjects.size < max) {
        freeObjects.add(object);
        peak = Math.max(peak, freeObjects.size);
    }
    reset(object);
}
