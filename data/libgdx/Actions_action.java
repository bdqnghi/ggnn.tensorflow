/**
 * Returns a new or pooled action of the specified type.
 */
static public <T extends Action> T action(Class<T> type) {
    Pool<T> pool = Pools.get(type);
    T action = pool.obtain();
    action.setPool(pool);
    return action;
}
