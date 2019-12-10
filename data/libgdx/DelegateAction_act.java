public final boolean act(float delta) {
    Pool pool = getPool();
    // Ensure this action can't be returned to the pool inside the delegate action.
    setPool(null);
    try {
        return delegate(delta);
    } finally {
        setPool(pool);
    }
}
