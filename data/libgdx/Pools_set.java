/**
 * Sets an existing pool for the specified type, stored in a Class to {@link Pool} map.
 */
static public <T> void set(Class<T> type, Pool<T> pool) {
    typePools.put(type, pool);
}
