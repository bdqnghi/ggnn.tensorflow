/**
 * Frees an object from the {@link #get(Class) pool}.
 */
static public void free(Object object) {
    if (object == null)
        throw new IllegalArgumentException("Object cannot be null.");
    Pool pool = typePools.get(object.getClass());
    // Ignore freeing an object that was never retained.
    if (pool == null)
        return;
    pool.free(object);
}
