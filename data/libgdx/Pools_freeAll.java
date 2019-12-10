/**
 * Frees the specified objects from the {@link #get(Class) pool}. Null objects within the array are silently ignored.
 * @param samePool If true, objects don't need to be from the same pool but the pool must be looked up for each object.
 */
static public void freeAll(Array objects, boolean samePool) {
    if (objects == null)
        throw new IllegalArgumentException("Objects cannot be null.");
    Pool pool = null;
    for (int i = 0, n = objects.size; i < n; i++) {
        Object object = objects.get(i);
        if (object == null)
            continue;
        if (pool == null) {
            pool = typePools.get(object.getClass());
            // Ignore freeing an object that was never retained.
            if (pool == null)
                continue;
        }
        pool.free(object);
        if (!samePool)
            pool = null;
    }
}
