/**
 * Returns a new or existing pool for the specified type, stored in a Class to {@link Pool} map. The max size of the pool used
 * is 100.
 */
static public <T> Pool<T> get(Class<T> type) {
    return get(type, 100);
}
